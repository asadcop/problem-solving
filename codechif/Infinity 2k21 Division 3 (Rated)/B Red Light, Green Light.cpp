#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  cin>>t;
  while (t--)
  {
    int n,k;
    cin>>n>>k;
    int a,c=0;
    for (int i = 0; i < n; i++)
    {
       cin>>a;
       if(a>k)c++;
    }
    cout<<c<<endl;
        
  }
  
  return 0;
}