#include <bits/stdc++.h>

using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
    int n;
    vector<int>v;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
      int x;
      cin>>x;
      v.push_back(x);
    }
    int c=0;
    for (int i = 0; i < v.size(); )
    {
      int x=max_element(v.begin(),v.end()) - v.begin();
      n--;
      c+=(n-x);
      v.erase(v.begin()+x);
    }
    cout<<"Optimal train swapping takes "<<c<<" swaps."<<endl;
  }  
  return 0;
}  