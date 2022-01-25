#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t,j=1;
  cin>>t;
  while (t--)
  {
    long long n,w,c=1,mx;
    cin>>n>>w;
    long long x,y[n];
    for(int i=0;i<n;i++)
    {
      cin>>x>>y[i];
    }
    sort(y,y+n);
    mx=w+y[0];
    for(int i=0;i<n;i++)if(y[i]<=mx)continue;
    else {c++;mx=y[i]+w;}
    cout<<"Case "<<j++<<": "<<c<<endl;
  }
  
  return 0;
  }  