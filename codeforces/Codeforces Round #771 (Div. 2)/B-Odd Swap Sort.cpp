#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    int a[n];
    int sum=0;
    for (int i = 0; i < n; i++)
    {
       cin>>a[i];
      
    }
    bool c=false;
    while (1)
    {
      int d=0;
    for (int i = 0; i < n-1; i++)
    {

      if(a[i]>a[i+1]){
        if((a[i]+a[i+1])%2==0){c=true;break;}
        swap(a[i],a[i+1]);
        d=1;
    }
    }
    if(d==0)break;
    }
    if(!c)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
  }
  return 0;
}