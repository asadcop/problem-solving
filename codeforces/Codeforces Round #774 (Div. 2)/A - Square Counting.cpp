#include<bits/stdc++.h>
using namespace std;
int main()
{ 
   int n;
   cin>>n;
   while (n--)
   {
       long long a,b,c=-1;
       cin>>a>>b;
       int d=a;
       if(a==1)cout<<b<<endl;
       else{
      c=b/(a*a);
       cout<<c<<endl;}
   }
   
    return 0;
}