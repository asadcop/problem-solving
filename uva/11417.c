#include<stdio.h>
int gcd(int a,int b);
int main()
{
      int i,j,sum=0,n=0;
            while(scanf("%d",&n)==1){
                  if(n==0)
                  break;

                        sum=0;
                        for(i=1;i<n;i++){
                              for(j=i+1;j<=n;j++){
                                    sum+=gcd(i,j);
                              }
                        }
                        printf("%d\n",sum);
            }

      return 0;
}

int gcd(int a,int b)
{
      if(b==0)
      return a;
      else
      return gcd(b,a%b);
}
