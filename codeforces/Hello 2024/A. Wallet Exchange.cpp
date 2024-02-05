#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        int a,b;
        cin>>a>>b;
        long long c=a+b;
        if (c%2==1)
        cout<<"Alice\n";
        else cout<<"Bob\n";
    }
    
    return 0;
}
