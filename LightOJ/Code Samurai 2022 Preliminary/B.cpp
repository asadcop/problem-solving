#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    int point=0;
    vector<pair<long long,long long>> v;
    while(t--)
    {
       long long a,b;
       cin>>a>>b;
       v.push_back({a,b});
    }
    unsigned long long int sum=0;
    sort(v.begin(), v.end(), greater <>());
    for(auto x:v)
    {
        if(point<x.second)
        {
            sum=sum+(x.first*(x.second-point));
            point=x.second;
        }

        
    }
    cout<<sum<<endl;
    return 0;
}
