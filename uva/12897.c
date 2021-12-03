#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,t;
    scanf("%d",&t);
    while(t--)
    {
        char a[1048576]={'\0'},a1[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
        scanf("%s", a);
        scanf("%d", &n);
        for(i=0;i<n;i++)
        {
            char c[3],c1[3];
            scanf("%s %s", c,c1);
           int j;
           for(j=0;j<26;j++){
            if(a1[j]==c1[0])
            a1[j]=c[0];
           }
        }
        i=0;
        while(a[i]!='\0')
        {
           if(a[i]>='A'&&a[i]<='Z')printf("%c", a1[a[i]-65]);
                else
                    printf("%c",a[i]);
                i++;
        }
        printf("\n");
    }
    return 0;
}

