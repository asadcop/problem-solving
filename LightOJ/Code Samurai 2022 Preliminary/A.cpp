#include <bits/stdc++.h>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        map<char,int> mp;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            string s;
            cin>>s;
            mp[s[0]]++; 
        }
        vector<char>v;
        for (auto x:mp)
        {
            if(x.second>2)
                v.push_back(x.first);
        }
        sort(v.begin(),v.end());
        if(!v.empty())
        {
            for (auto x:v)
                cout<<x;
            cout<<endl;
        }
        else cout<<"impossible"<<endl;
    }
    return 0;
}
