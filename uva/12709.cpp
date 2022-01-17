#include <bits/stdc++.h>

using namespace std;

int main()
{
  while (1)
  {
     int n,mx=0,v;
     cin>>n;
     if(n==0)break;
     for (int i = 0; i < n; i++)
     {
       int a,b,c;
       cin>>a>>b>>c;
       if(c>mx||(c==mx&&a*b*c>v)){
         v=a*b*c;
         mx=c;
       }
     }
     cout<<v<<endl;
     
  }
    
  return 0;
}