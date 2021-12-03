#include<stdio.h>
#include<math.h>
int main()
{
    int n,i=1;
    while(1)
    {
        scanf("%d", &n);
        if(n<0)break;
        int a=log10(n)/log10(2);
        printf("Case %d: ", i++);
        int b=pow(2,a);
        if(n!=b)printf("%d\n", a+1);
        else printf("%d\n", a);
    }
    return 0;
}
