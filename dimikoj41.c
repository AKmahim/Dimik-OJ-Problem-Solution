#include<stdio.h>
int main()
{
    //freopen("input.txt","rt",stdin);
    //freopen("output.txt","wt",stdout);

    int i,j,k,T,n;
    float sum,fact;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%d",&n);
        for(j=1;j<=n;j++){
            fact=1.0;
            for(k=1;k<=i;k++){
                fact=fact*k;
            }
            sum= sum+(i/fact);

        }
        printf("%f\n",sum);
    }
    return 0;
}
