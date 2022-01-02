#include <bits/stdc++.h>
using namespace std;
int main()
{
  int n,m;
  cin>>n>>m;
  int ar[110000];
  ar[0]=0;
  long long int sum=0;
  for(int i=1;i<=n;i++){
        int a;
        cin>>a;
        sum+=a;
        ar[i]=sum;
  }
  while(m--){
    int l,r;
    cin>>l>>r;
    long long ll=ar[r]-ar[l-1];
    if(ll%2==0)cout<<"Sim"<<endl;
    else cout<<"Nao"<<endl;
  }
}