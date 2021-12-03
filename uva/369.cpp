#include <bits/stdc++.h>
using namespace std;
unsigned long long cn(int n,int x,int a)
{
    unsigned long long int l=1;
    int c=1;
    for(int i=n;i<=a;i++){
        if(c>x)break;
        l*=i;
        
        l/=c;
        c++;
    }
    return l;
}
int main()
{
    int a,b;
    while (1)
    {
        cin>>a>>b;
        if(a==0)break;
        int s=a-b;
        unsigned long long int c;
        if(b>s)c=cn(b+1,s,a);
        else c=cn(s+1,b,a);
        cout<<a<<" things taken "<<b<<" at a time is "<<c<<" exactly."<<endl;

    }
    
    return 0;
}