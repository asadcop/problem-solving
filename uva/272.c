#include<stdio.h>
int main()
{
    int bol=0;
    char a;
    while(scanf("%c", &a)==1)
    {
        if(a=='"'&&bol==0){
            printf("``");
            bol=1;
        }
      else if(bol==1&&a=='"')
        {
            printf("''");
            bol=0;
        }
        else printf("%c",a);
    }
    return 0;
}
