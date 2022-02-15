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
    vector<int >va,vb;
    for (int i = 0; i < n; i++)
    {
       cin>>a[i];
       if(a[i]%2==0)va.push_back(a[i]);
       else vb.push_back(a[i]);
      
    }
 
    if(is_sorted(va.begin(),va.end())&&is_sorted(vb.begin(),vb.end()))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
  }
  return 0;
}