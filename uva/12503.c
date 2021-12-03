#include<stdio.h>
#include<string.h>
int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n,i,c=0,s=0;
        scanf("%d", &n);
        for(i=0;i<n;i++)
        {
            char a[20]={'\0'};
            scanf("%s[^\n]",a);
            if(strcmp(a,"LEFT")==0){
                c=0;
                s--;
            }
            else if(strcmp(a,"RIGHT")==0)
            {
                c=1;
                s++;
            }
            else
            {
                if(c==1)s++;
                else s--;
            }
        }
        printf("%d\n", s);
    }
    return 0;
}
