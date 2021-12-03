#include<stdio.h>
int main()
{
    int n,n1;
    while(scanf("%d %d", &n,&n1)==2)
    {
        printf("%d\n", (n*n1)-1);
    }
    return 0;
}
