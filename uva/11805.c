#include<stdio.h>
int main()
{
    int T,N,K,i,P,D;
    scanf("%d",&T);
        for(i=1;i<=T;i++){
        scanf("%d%d%d",&N,&K,&P);
        D = (K+P)%N;
        if(D!=0)
        printf("Case %d: %d\n",i,D);
        else printf("Case %d: %d\n",i,N);
        }

    return 0;
}
