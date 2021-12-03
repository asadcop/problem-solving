#include<stdio.h>
int main()
{
    long long n;
    while(scanf("%lld", &n)==1)
    {
        printf("%lld\n", (n*(n+1)/2)*(n*(n+1)/2));
    }
    return 0;
}
