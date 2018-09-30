#include<stdio.h>
main()
{
    int t,i,j,p,c,k,n,d;
    scanf("%d",&t);
    while(t--){
    scanf("%d",&n);
    unsigned long int b[n];unsigned long int a[n];
    for(i=0;i<n;i++){
        scanf("%ld",&a[i]);
        b[i]=a[i];}
   int tp[n-1][2];
    for(i=0;i<n-1;i++)
        for(j=0;j<2;j++)
        scanf("%d",&tp[i][j]);

  /* for (i = 0; i < n; i++)
    {d=1;
        for (j = i + 1; j < n; j++)
        {
            if (a[i]< a[j])
            {
                k =  a[i];
                a[i] = a[j];
                a[j] = k;
                d=0;
                b[i] = j+1;
                b[j] = i+1;
            }
          else
                b[i]=i+1;
        }
        //if(d==1)
          //  b[i]=i+1;
    }
    for(i=0;i<n;i++){
        printf("%d",a[i]);
        printf("\t%d\n",b[i]);*/

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
                b[j]=i+1;
                break;
            }
        }
    }

  for(p=1;p<=n;p++)
    {
        for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n-1;j++)
           {

         if((b[i]==tp[j][0]||b[i]==tp[j][1])&&(p==tp[j][0]||p==tp[j][1]))
                       {c=1;
                       break;}
            }
                 if(c==0){
                printf("%ld ",b[i]);
                break;}

    }
    if(c==1)
        printf("%d ",0);
    }
    }

}
