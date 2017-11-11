#include<stdio.h>
#include<math.h>
int main () {
    int t,n,m,i;
    scanf("%d",&t);
    double a;
    while(t--) {
        scanf("%d",&n);
        scanf("%d",&m);
        if(m<0){
            printf("-1\n");
            continue;
        }
        if(n==1&&m!=0){
            printf("-1\n");
            continue;
        }
        a=sqrt(((double)3*m*m*n)/((double)(n/2)*((n/2)+1)*(2*(n/2)+1)));
        if(n%2==1) {
            if(m==0)
                for(i=-n/2; i<=n/2; i++)
                    printf("0 ");
            else
                for(i=-n/2; i<=n/2; i++)
                    printf("%lf ",(i*a));
        }
        else {
            if(m==0)
                for(i=-n/2; i<n/2; i++)
                    printf("0 ");
            else {
                for(i=-n/2; i<0; i++)
                    printf("%lf ",(i*a));
                for(i=1; i<=n/2; i++)
                    printf("%lf ",(i*a));
            }
        }
        printf("\n");
    }
    return 0;
}