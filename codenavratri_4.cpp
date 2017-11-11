    #include <bits/stdc++.h>
    using namespace std;
    const long long InF = 1e9;
    int t, n;
    char S[105];
    int Z[105][105], f[105][105];
    long long dp0[105], dp[105][105][105];

    inline void mini(long long &x, long long y) {
        x = min(x, y);
        x = min(x, InF);
    }

    void solve() {
        for(int i=0; i<=n; i++) for(int j=0; j<=n; j++) for(int k=0; k<=n; k++)
            dp[i][j][k] = InF;
        for(int i=0; i<=n; i++)
            dp0[i] = InF;

        dp0[0] = 0;
        for(int i=1; i<=n; i++) {
            int x, y;

            // paste some substring S[j,i]
            for(int j=1; j<=i; j++) {
                x = f[j][i], y = x + i-j;
                mini(dp[i][x][y], dp[j-1][x][y] + 1);
                mini(dp0[i], dp[i][x][y]);
            }

            // type char S[i]
            mini(dp0[i], dp0[i-1] + 1);
            for(int j=1; j<i; j++) for(int k=1; k<=j; k++)
                mini(dp[i][k][j], dp[i-1][k][j] + 1);

            // update
            for(int j=1; j<=i; j++) for(int k=1; k<=j; k++)
                mini(dp[i][k][j], dp0[i] + 1);

        }
    }

    // codeforces.com/blog/entry/3107
    void solve1() {
        for(int st=1; st<=n; st++) {
            int L = st, R = st;
            Z[st][st] = n - st + 1;
            for(int i=st+1; i<=n; i++) {
                if(i>R) {
                    L = R = i;
                    while(R<=n && S[st+R-L]==S[R]) R++;
                    Z[st][i] = R - L; R--;
                }
                else {
                    int k = st + i - L;
                    if(Z[st][k]<R-i+1) Z[st][i] = Z[st][k];
                    else {
                        L = i;
                        while(R<=n && S[st+R-L]==S[R]) R++;
                        Z[st][i] = R - L; R--;
                    }
                }
            }
        }
    }

    void solve2() {
        for(int i=1; i<=n; i++) for(int j=1; j<=i; j++) {
            for(int st=j; st>=1; st--)
                if(Z[st][j] >= i-j+1)
                    f[j][i] = st;
        }
    }

    int main() {

        cin >>t;
        while(t--)
        {
            cin >> S+1;
            n = strlen(S+1);
            solve1();
            solve2();
            solve();

            cout <<dp0[n]<<endl;
        }
        return 0;
    }
