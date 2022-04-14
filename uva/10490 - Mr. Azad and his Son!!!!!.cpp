#include<bits/stdc++.h>
using namespace std;
int a[100000000];
bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;
 
    // Check from 2 to square root of n
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
 
    return true;
}
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
 
 int n,n1;
 while (cin>>n)
 {
     if(n==0)break;
     int d=pow(2,n)-1;
    // cout<<d<<" ";
     if(d%2==0){
         if(binary_search(v.begin(),v.end(),n))cout<<"Given number is prime. But, NO perfect number is available.\n";
         else cout<<"Given number is NOT prime! NO perfect number is available.\n";
     }
     else if(v[v.size()-1]<d){
         if(isPrime(d))cout<<"Perfect: "<<(long long)pow(2,n-1)*d<<"!\n";
         else if(binary_search(v.begin(),v.end(),n))cout<<"Given number is prime. But, NO perfect number is available.\n";
         else cout<<"Given number is NOT prime! NO perfect number is available.\n";
     }
     else {
         if(binary_search(v.begin(),v.end(),d))cout<<"Perfect: "<<(long long)pow(2,n-1)*d<<"!\n";
         else if(binary_search(v.begin(),v.end(),n))cout<<"Given number is prime. But, NO perfect number is available.\n";
         else cout<<"Given number is NOT prime! NO perfect number is available.\n";
     }
 }
     return 0;
}
