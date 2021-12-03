#include<stdio.h>
int main()
{
    int n,k;
    while(scanf("%d %d", &n,&k)==2)
    {
        int a=n;
        while(a>=k)
        {
            n=n+(a/k);

            a=(a/k)+(a%k);
        }
        printf("%d\n", n);
    }
    return 0;
}
