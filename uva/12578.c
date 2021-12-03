#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d", &n);
    while(n--)
    {
        double a;
        scanf("%lf", &a);
        double b=acos(-1)*(.2*a)*(.2*a);
        double c=(a*(.6*a))-b;
        printf("%.2lf %.2lf\n", b,c);
    }
    return 0;
}
