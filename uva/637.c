#include<stdio.h>
int main()
{
    int n;
    while(1)
    {
        scanf("%d", &n);
        int c=1,n1=n;
        if(n==0)
            break;
        printf("Printing order for %d pages:\n",n);
        if(n==1)printf("Sheet 1, front: Blank, 1\n");
        else
        {
            int i=1,a=n%4;
            if(a!=0){
                a=4-a;
                for(;i<=a;i++)
            {
                if(i%2==1)printf("Sheet %d, front: Blank, %d\n", c,i);
                else printf("Sheet %d, back : %d, Blank\n",c,i);
                if(i%2==0)c++;
            }}
            for(;i<=(n+a)/2;i++)
            {
                if(i%2==1)printf("Sheet %d, front: %d, %d\n", c,n1,i);
                else printf("Sheet %d, back : %d, %d\n",c,i,n1);
                if(i%2==0)c++;
                n1--;
            }
        }
    }
    return 0;
}

