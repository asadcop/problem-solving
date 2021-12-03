#include<stdio.h>
#include<string.h>
int main()
{
    char s[10000], f[1000];
    int n, i, j, k;
    while(scanf("%d",&n) && n != -1)
    {
        scanf("%s %s",s,f);
        int a[26], b[26], c = 0, w = 0;

        for(i=0;i<26;i++)
            a[i] = b[i] = 0;

        for(i=0;i<strlen(s);i++)
        {
            int t = s[i] - 'a';
            if(a[t] == 0)
            {
                a[t] = 1;
                c++;
            }
        }

        for(i=0;i<strlen(f);i++)
        {
            if(w == 7 || c == 0)
                break;

            int t = f[i] - 'a';

            if(a[t] == 1)
            {
                a[t] = 0;
                b[t] = 1;
                c--;
            }

            else if(b[t] == 0)
            {
                b[t] = 1;
                w++;
            }
        }

        printf("Round %d\n",n);
        if(c == 0)
            printf("You win.\n");
        else if(w == 7)
            printf("You lose.\n");
        else
            printf("You chickened out.\n");
    }

    return 0;
}
