#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--){
      string a;
      cin>>a;
      int c=1,so=0;
      for(int i=0;i<a.size();i++)
      {
         if(a[i]>=65&&a[i]<=90)
         {
             c++;
         }
         if(c>7){
            cout<<"NO"<<endl;
            so=1;
            break;
         }
      }if(so==0)cout<<"YES"<<endl;

    }
  return 0;
}
