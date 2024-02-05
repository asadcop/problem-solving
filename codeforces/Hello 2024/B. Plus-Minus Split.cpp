#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while (n--)
    {
        int a,c=0;
        string s;
        cin>>a>>s;
    
        for (int i=0;i<a;i++)
        if (s[i]=='+')c++;
        else c--;
        cout<<abs(c)<<endl;
    }
    
    return 0;
}
