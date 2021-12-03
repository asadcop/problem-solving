#include<stdio.h>
#include<string.h>
int main()
{
while(1){
    int n;
    char a[10];
    scanf("%d %s", &n,a);
    if(n==0)break;
    int i,j,k,n1=strlen(a);
    int n2=(n*2)+3;
    for(i=1;i<=n2;i++)
    {
        for(j=0;j<n1;j++)
        {
        if(a[j]=='0')
        {
            if(i==1||i==n2)
            {
                printf(" ");
                for(k=0;k<n;k++)printf("-");
                printf(" ");
            }
            else if(i==(n2/2)+1){
                for(k=0;k<n+2;k++)printf(" ");
            }
            else {
                printf("|");
                for(k=0;k<n;k++)printf(" ");
                printf("|");
            }
             if(j!=n1-1)printf(" ");
            else printf("\n");
        }
        else if(a[j]=='1')
        {
            if(i==1||i==((n2/2)+1)||i==n2)
            {
                for(k=0;k<n+1;k++)printf(" ");
            }
            else {
                for(k=0;k<n;k++)printf(" ");
                printf("|");
            }
            if(j!=n1-1)printf(" ");
            else printf("\n");
        }
        else if(a[j]=='2')
        {
            if(i==1||i==((n2/2)+1)||i==n2)
            {
                printf(" ");
                for(k=0;k<n;k++)printf("-");
                printf(" ");
            }
            else if(i>1&&i<(n2/2)+1)
            {
                for(k=0;k<=n;k++)printf(" ");
                printf("|");
            }
            else {
                printf("|");
                for(k=0;k<=n;k++)printf(" ");

            }
            if(j!=n1-1)printf(" ");
            else printf("\n");
        }
        else if(a[j]=='3')
        {
            if(i==1||i==((n2/2)+1)||i==n2)
            {
                printf(" ");
                for(k=0;k<n;k++)printf("-");
                printf(" ");
            }

            else {

                for(k=0;k<=n;k++)printf(" ");
                printf("|");

            }
            if(j!=n1-1)printf(" ");
            else printf("\n");
        }
        else if(a[j]=='4')
        {
            if(i==1||i==n2)
            {
                for(k=0;k<=n+1;k++)printf(" ");
            }
            else if(i==((n2/2)+1))
            {
                 printf(" ");
                for(k=0;k<n;k++)printf("-");
                printf(" ");
            }
            else if(i>1&&i<(n2/2)+1)
            {
                printf("|");
                for(k=0;k<n;k++)printf(" ");
                printf("|");
            }
            else {
                for(k=0;k<=n;k++)printf(" ");
                printf("|");
            }
            if(j!=n1-1)printf(" ");
            else printf("\n");

        }
        else if(a[j]=='5')
        {
            if(i==1||i==((n2/2)+1)||i==n2)
            {
                printf(" ");
                for(k=0;k<n;k++)printf("-");
                printf(" ");
            }
            else if(i>1&&i<(n2/2)+1)
            {
                printf("|");
                for(k=0;k<=n;k++)printf(" ");

            }
            else {

                for(k=0;k<=n;k++)printf(" ");
                printf("|");

            }
            if(j!=n1-1)printf(" ");
            else printf("\n");
        }
        else if(a[j]=='6')
        {
            if(i==1||i==((n2/2)+1)||i==n2)
            {
                printf(" ");
                for(k=0;k<n;k++)printf("-");
                printf(" ");
            }
            else if(i>1&&i<(n2/2)+1)
            {
                printf("|");
                for(k=0;k<=n;k++)printf(" ");
            }
            else {
                printf("|");
                for(k=0;k<n;k++)printf(" ");
                printf("|");

            }
            if(j!=n1-1)printf(" ");
            else printf("\n");
        }
        else if(a[j]=='7')
        {
            if(i==1)
            {
                printf(" ");
                for(k=0;k<n;k++)printf("-");
                printf(" ");
            }
            else if(i==(n2/2)+1||i==n2)
            {
                for(k=0;k<n+2;k++)printf(" ");
            }
            else
            {
                for(k=0;k<=n;k++)printf(" ");
                printf("|");
            }
            if(j!=n1-1)printf(" ");
            else printf("\n");
        }
        else if(a[j]=='8')
        {
             if(i==1||i==((n2/2)+1)||i==n2)
            {
                printf(" ");
                for(k=0;k<n;k++)printf("-");
                printf(" ");
            }

            else {
                printf("|");
                for(k=0;k<n;k++)printf(" ");
                printf("|");
            }
             if(j!=n1-1)printf(" ");
            else printf("\n");

        }
        else {
             if(i==1||i==((n2/2)+1)||i==n2)
            {
                printf(" ");
                for(k=0;k<n;k++)printf("-");
                printf(" ");
            }
            else if(i>1&&i<(n2/2)+1) {
                printf("|");
                for(k=0;k<n;k++)printf(" ");
                printf("|");
            }
            else {
                for(k=0;k<=n;k++)printf(" ");
                printf("|");
            }
             if(j!=n1-1)printf(" ");
            else printf("\n");

        }
        }

    }}
    return 0;
}
