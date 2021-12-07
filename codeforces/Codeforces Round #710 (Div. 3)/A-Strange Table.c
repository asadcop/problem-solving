//problem link: https://codeforces.com/contest/1506/problem/A
#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        long long  a,b,c;
        scanf("%lld %lld %lld", &a,&b,&c);
        long long a1=0,b1=1,i=1,ad=1;
        {
            if(i==c)
            {
                printf("%lld\n", ad);
            }
            else if(a*b==c)
            {
                printf("%lld\n", c);
            }
            else
            {
                a1=c/a;
                b1=c%a-1;
                ad=a1+1;
                if(b1==-1){
                    ad=a1;
                    b1=a-1;
                }
                while(b1--)
                {
                    ad=ad+b;
                }
                printf("%lld\n", ad);
            }
        }
    }
    return 0;
}
