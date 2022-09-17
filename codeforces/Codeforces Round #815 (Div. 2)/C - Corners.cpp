#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t;
   cin>>t;
   while (t--)
   {
      int n,m;
      cin>>n>>m;
      string s[n];
      bool ok=false;
      long long co=0;
      for(int i=0;i<n;i++)cin>>s[i];
      for (int i = 0; i < n-1; i++)
      {
         int d=0;
         for (int j = 0; j < m-1; j++)
         {
            d=0;
            d+=(s[i][j]-'0');
            d+=(s[i][j+1]-'0');
            d+=(s[i+1][j]-'0');
            d+=(s[i+1][j+1]-'0');
            //cout<<d<<endl;
            if(!ok&&d<=2)
            {
               ok=true;
            }
            if(s[i][j]=='1')co++;
         }   
      }
      for(int i=0;i<n;i++)if(s[i][m-1]=='1')co++;
      for(int i=0;i<m;i++)if(s[n-1][i]=='1')co++;
      //cout<<co<<endl;
      //cout<<ok<<endl;
      if(s[n-1][m-1]=='1')co--;
      if(ok)cout<<co<<endl;
      else if(co==m*n)cout<<co-2<<endl;
      else cout<<co-1<<endl;
      
   }
   
   return 0;
}