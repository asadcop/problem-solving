#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long n;
  while(cin>>n)
  {
    long long d =(-1+sqrt(1+8*n))/2;
    long long s1=(d*(d+1))/2;
    if(s1==n)cout<<"1/"<<d<<endl;
    else {
      d++;
      cout<<d-(n-s1)+1<<"/"<<n-s1<<endl;
    }
  }
  return 0;
}