#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a,m=10000000;

        long long b=0;
        for(int i=0;i<n;i++){
            cin>>a;
            b+=a;
            m=min(a,m);
        }
        cout<<b-m<<end;
    }
    
    return 0;
}
