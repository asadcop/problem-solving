#include <bits/stdc++.h>
using namespace std;
void Gcd(long long n1,long long n2){
    int gcd;
    gcd =__gcd(n1,n2);
   if(gcd==1)cout<<"Nao"<<endl;
   else cout<<"Sim"<<endl;
}
int main()
{
  int t;
  cin>>t;

  while(t--){
    long long a,b;
    cin>>a>>b;
    Gcd(a,b);

  }
}