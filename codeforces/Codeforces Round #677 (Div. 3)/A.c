//problem link: https://codeforces.com/contest/1433
#include<stdio.h>
#include<math.h>
int main()
{
    int i,n;
    scanf ("%d", &n);
    for (i=1;i<=n;i++)
    {
        int a,b,c;
        scanf("%d", &a);
        b=log10(a)+1;
        c=a%10;
        if(c==1)
        {
            if(b==1) printf("1\n");
            else if (b==2) printf("3\n");
            else if (b==3) printf("6\n");
            else if (b==4) printf ("10\n");
        }
        else if(c==2)
        {
            c=10;
            if(b==1) printf("%d\n", c+1);
            else if (b==2) printf("%d\n",c+3);
            else if (b==3) printf("%d\n", c+6);
            else if (b==4) printf ("%d\n", c+10);
        }
        else if(c==3)
        {
            c=20;
            if(b==1) printf("%d\n", c+1);
            else if (b==2) printf("%d\n",c+3);
            else if (b==3) printf("%d\n", c+6);
            else if (b==4) printf ("%d\n", c+10);
        }
         else if(c==4)
        {
            c=30;
            if(b==1) printf("%d\n", c+1);
            else if (b==2) printf("%d\n",c+3);
            else if (b==3) printf("%d\n", c+6);
            else if (b==4) printf ("%d\n", c+10);
        }
         else if(c==5)
        {
            c=40;
            if(b==1) printf("%d\n", c+1);
            else if (b==2) printf("%d\n",c+3);
            else if (b==3) printf("%d\n", c+6);
            else if (b==4) printf ("%d\n", c+10);
        }
        else if (c==6)
        {
            c=50;
            if(b==1) printf("%d\n", c+1);
            else if (b==2) printf("%d\n",c+3);
            else if (b==3) printf("%d\n", c+6);
            else if (b==4) printf ("%d\n", c+10);
        }
       else if (c==7)
       {
           c=60;
           if(b==1) printf("%d\n", c+1);
            else if (b==2) printf("%d\n",c+3);
            else if (b==3) printf("%d\n", c+6);
            else if (b==4) printf ("%d\n", c+10);
       }
       else if (c==8)
       {
           c=70;
           if(b==1) printf("%d\n", c+1);
            else if (b==2) printf("%d\n",c+3);
            else if (b==3) printf("%d\n", c+6);
            else if (b==4) printf ("%d\n", c+10);
       }
       else if (c==9)
       {
           c=80;
           if(b==1) printf("%d\n", c+1);
            else if (b==2) printf("%d\n",c+3);
            else if (b==3) printf("%d\n", c+6);
            else if (b==4) printf ("%d\n", c+10);
       }

    }
    return 0;
}
