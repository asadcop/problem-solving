#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--){
    long long n,r,i;
    scanf("%lld", &n);
    for(i=0;;i++)
    {
        r=0;
        long long a=n;
        while(a!=0)
        {
            r=r*10+(a%10);
            a/=10;
        }
        if(r==n){printf("%lld %lld\n", i,n);break;}
        else n=n+r;
    }
    }
    return 0;
}
