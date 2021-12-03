#include<stdio.h>
int main()
{
    int t,i;
    scanf("%d", &t);
    for(i=1;i<=t;i++)
        {
            int a,b,c,e,f,g,k;
            scanf("%d/%d/%d",&a, &b, &c);
            scanf( "%d/%d/%d",&e, &f, &g);
            k=(c-g);
            if(b<f)
                k--;
            else if(b==f)
            {
                if(a<e)
                k--;
            }
            if(k<0)
                printf("Case #%d: Invalid birth date\n", i );
            else if(k>130)
                printf("Case #%d: Check birth date\n", i);
            else
                printf("Case #%d: %d\n",i,k);
        }
    return 0;
}
