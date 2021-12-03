#include<stdio.h>
int main()
{
    long long t,s,d;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%lld %lld", &s,&d);
        if(d>s||(d+s)%2!=0)printf("impossible\n");
        else printf("%lld %lld\n", (s+d)/2,(s-d)/2);
    }
    return 0;
}
