#include<bits/stdc++.h>
using namespace std;
int a[100000007];
int main()
{
      vector<long long>v;

  //v.push_back(1);
  for (long long i = 2; i <10000000; i++)
  {
      if(a[i]==0){
          v.push_back(i);
          for (long long j = i*i; j<10000000; j+=i)
          {
              a[j]=1;
          }
          
      }
  }
 
  //cout<<v.size()<<endl;
  vector<int>d;
 int n,n1;
 while (cin>>n)
 {
     d.clear();
     if(n<8) cout<<"Impossible.";
    else {
        int a,b;
        if(n%2==0){
        cout<<"2 2 ";
        
        n=n-4;
        for (int i = 0; v[i] <n ; i++)
        {
            n1=n-v[i];
           
            if(binary_search(v.begin(),v.end(),n1)){
                a=v[i];
                b=n1;
                break;
            }
        }
        
    }
     else {
         cout<<"2 3 ";
        n=n-5;
        for (int i = 0; v[i] <=n ; i++)
        {
            n1=n-v[i];
            if(binary_search(v.begin(),v.end(),n1)){
                a=v[i];
                b=n1;
                break;
            }
        }
     }
    cout<<a<<" "<<b;
    }
    puts("");
 }
     return 0;
}
