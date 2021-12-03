#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    while(n--)
    {
        int a,b,i,j,k;
        scanf("%d %d", &a,&b);
        for(i=1;i<=b;i++)
        {
            for(j=1;j<=a;j++)
                {for(k=1;k<=j;k++)printf("%d", j);
                printf("\n");
                }
            for(j=a-1;j>=1;j--)
                {for(k=1;k<=j;k++)printf("%d", j);
                printf("\n");
                }
              if(i<b||n>0)printf("\n");
        }
    }
    return 0;
}
