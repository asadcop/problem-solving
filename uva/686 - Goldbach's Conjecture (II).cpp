#include<bits/stdc++.h>
using namespace std;
int a[10000005];
int main()
{
     vector<int>v;

  //v.push_back(1);
  for (long long i = 2; i <10000000; i++)
  {
      if(a[i]==0){
          v.push_back(i);
          for (long long j = i*i; j<10000000; j+=i)
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
     int sum=0;
    int ind=lower_bound(v.begin(),v.end(),n)-v.begin();
    int in=(ind)/2;
    for (int i = 0; i < ind; i++)
    {
        int d=n-v[i];
        if(d==v[i])sum+=2;
        else if(binary_search(v.begin(),v.begin()+ind+1,d)){sum++;}
    }
    cout<<sum/2<<endl;
     
 }
     return 0;
}