#include<bits/stdc++.h>
using namespace std;
int a[1000005];
int main()
{
     vector<int>v;

  //v.push_back(1);
  for (long long i = 2; i <1000000; i++)
  {
      if(a[i]==0){
          v.push_back(i);
          for (long long j = i*i; j<=1000000; j+=i)
          {
              a[j]=1;
          }
          
      }
  }
  //cout<<v.size()<<endl;
 int n;
 while (cin>>n)
 {
     if(n==0)break;
     for (int i = 1; i < v.size(); i++)
     {
         int d=n-v[i];
         if(binary_search(v.begin(),v.end(),d)){
             cout<<n<<" = "<<v[i]<<" + "<<d<<endl;
             break;
         }
     }
     
 }
     return 0;
}