#include <bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while (t--)
   {
       long long n;
       cin>>n;
      long long d=1;
      while (d<=n)
      {
          d*=2;
      }    
       if(d>n)d/=2;  
           cout<<d-1<<endl;
    
   }
   
    return 0;
}