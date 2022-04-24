#include<bits/stdc++.h>
using namespace std;
int ar[10000][5];
int a[100000000];
int main()
{
    
    vector<long long>v;
    //set<long long>powr;    
  //v.push_back(1);
  for (long long i = 2; i <1000000; i++)
  {
      if(a[i]==0){
          v.push_back(i);
          for (long long j = i*i; j<1000000; j+=i)
          {
              a[j]=1;
          }
          
      }
  }
  int n;
  while (cin>>n)
  {
     if(n==0)break;
     int s=n/2;
     if(n%2==1)s++;
     bool is=false;
     int d=lower_bound(v.begin(),v.end(),s)-v.begin();
     for (int i = 0; i <=d; i++)
     {
         if(binary_search(v.begin(),v.end(),n-v[i]))
         {
             is=true;
             
             printf("%d:\n%d+%d\n",n,min(v[i],n-v[i]),max(v[i],n-v[i]));
             break;

         }
     }
     if(!is){//cout<<n<<"\nNO WAY!\n";
    printf("%d:\nNO WAY!\n",n);}
  }
    
     return 0; 
}
