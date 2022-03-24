#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int a,b;
       cin>>a>>b;
       int d=sqrt(a*a+b*b);
     if(a==0&&b==0)cout<<0<<endl;
    else if(d*d==(a*a+b*b))cout<<1<<endl;
       
       else if(a==0||b==0)cout<<1<<endl;
       else cout<<2<<endl;
   }
   return 0;
}
