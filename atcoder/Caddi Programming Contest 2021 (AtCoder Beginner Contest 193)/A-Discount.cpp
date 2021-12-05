//problem link: https://atcoder.jp/contests/abc193/tasks/abc193_a
#include<stdio.h>

int main()
{
    double a,b;
    scanf("%lf %lf", &a,&b);
    printf("%lf\n", (a-b)/a*100);
    return 0;
}
