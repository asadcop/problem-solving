//problem link: https://atcoder.jp/contests/abc230/tasks/abc230_a
#include<bits/stdc++.h>

using namespace std;

int main() {
  int a;
cin>>a;
if(a<42)
{
  if(a<10)cout<<"AGC00"<<a<<endl;
  else cout<<"AGC0"<<a<<endl;
}
else cout<<"AGC0"<<a+1<<endl;
}