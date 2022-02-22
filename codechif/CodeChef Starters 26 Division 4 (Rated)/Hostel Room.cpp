#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,y;
        cin>>n>>y;
        int a[n];
        int sum=y;
        for (int i=0 ;i<n;i++){
            cin>>a[i];
            y=y+a[i];
            sum=max(sum,y);
          //  cout<<y<<" ";
        }
        cout<<sum<<endl;
    }
	return 0;
}
