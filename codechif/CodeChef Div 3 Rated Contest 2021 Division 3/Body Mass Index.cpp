//problem link: https://www.codechef.com/CCRC21C/problems/BMI
#include<stdio.h>
#include <math.h>
int main()
{
    int n,a,b;
    scanf("%d", &n);
    while(n--)
    {
        scanf("%d %d", &a,&b);
        b=b*b;
        if((a/b)<=18)printf("1\n");
        else if((a/b)<=24)printf("2\n");
        else if((a/b)<=29)printf("3\n");
        else printf("4\n");
    }
    return 0;
}
