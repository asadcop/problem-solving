#include<bits/stdc++.h>
using namespace std;
int ar[10000][5];
int a[100000000];
int main()
{
    
    vector<long long>v;
    //set<long long>powr;    
  //v.push_back(1);
  for (long long i = 2; i <1000000; i++)
  {
      if(a[i]==0){
          v.push_back(i);
          for (long long j = i*i; j<1000000; j+=i)
          {
              a[j]=1;
          }
          
      }
  }
  int n,t;cin>>t;
  while (t--)
  {
     cin>>n;
     int s=n/2;
     if(n%2==1)s++;
     bool is=false;
     int d=lower_bound(v.begin(),v.end(),s)-v.begin();
    if(2*v[d]>n)cout<<v[d]<<endl;
    else
     cout<<v[d+1]<<endl;
  }
    
     return 0; 
}
