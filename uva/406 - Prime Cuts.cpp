#include<bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> arr, int l, int r, int x)
{
     int mid = l + (r - l) / 2;
    if (r >= l) {
       
        if (arr[mid] == x){
            return mid;
            }
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);
        return binarySearch(arr, mid + 1, r, x);
    }
    return mid;
}

int main()
{
     vector<int>v;
 int a[10000]={0};
  v.push_back(1);
  for (int i = 2; i <=1050; i++)
  {
      if(a[i]==0){
          v.push_back(i);
          for (int j = i*i; j<=1050; j+=i)
          {
              a[j]=1;
          }
          
      }
  }
  //cout<<v.size()<<endl;
 int n,c;
 while (cin>>n>>c)
 {
      int mid=binarySearch(v,0,v.size(),n);
      cout<<n<<" "<<c<<":";
      if(c>=n||(mid<=2*c&&n%2==0)||(mid<=2*c-1&&n%2!=0)){
          for (int i = 0; i < mid-1; i++)
          cout<<" "<<v[i];
          if(mid>0)cout<<" "<<v[mid-1];
          if(v[mid]==n)cout<<" "<<v[mid];
          puts("\n");         
      }
      else {
          int d;
          if(v[mid]==n)mid++;
          if(mid%2==0)
          {
              d=2*c;
              int b=mid/2;
              for (int i = b-c; i < b+c; i++)
                 cout<<" "<<v[i];
                 puts("\n");
          }
          else {
              d=2*c-1;
              int b=mid/2;
              for (int i = b-c+1; i < b+c; i++)
                 cout<<" "<<v[i];puts("\n");
          }
      }
      
 }
 
 
  
    return 0;
}