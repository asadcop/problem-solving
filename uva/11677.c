#include<stdio.h>
#include<string.h>
int main()
{
    int h,m,h1,m1;
    while (1)
    {
        scanf("%d %d %d %d", &h,&m,&h1,&m1);
        if(h==0&&m==0&&h1==0&&m1==0)break;
        if(h==h1&&m<m1)printf("%d\n", m1-m);
        else if(h==h1)printf("%d\n", (24*60)+m1-m);
        else if(h<h1){
            printf("%d\n", ((h1-h-1)*60)+(60-m)+m1);
        }
        else printf("%d\n", (((24-h)+h1-1)*60)+(60-m)+m1);

    }
    return 0;
}
