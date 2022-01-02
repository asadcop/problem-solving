#include <bits/stdc++.h>

using namespace std;

int main()
{
    string a;
    cin>>a;
    int n=1,i;
    for(i=0;i<a.size();i++)
    {
        if(a[i]==a[i+1])n++;
        else {
            cout<<a[i]<<n;
            n=1;
        }
    }



  return 0;
}