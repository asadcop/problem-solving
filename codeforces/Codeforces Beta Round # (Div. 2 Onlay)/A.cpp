//problem link: https://codeforces.com/contest/6/problem/A
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[4];
    for(int i=0;i<4;i++)cin>>a[i];
    sort(a,a+4);
    if((a[0]+a[1]>a[2])||(a[1]+a[2]>a[3]))cout<<"TRIANGLE"<<endl;
    else if((a[0]+a[1]==a[2])||(a[1]+a[2]==a[3]))cout<<"SEGMENT"<<endl;
    else cout<<"IMPOSSIBLE"<<endl;
    return 0;
}
