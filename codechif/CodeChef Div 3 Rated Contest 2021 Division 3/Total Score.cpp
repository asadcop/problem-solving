//probelm link: https://www.codechef.com/CCRC21C/problems/TOTSCR
#include <iostream>
#include <string>
#define ll long long int
using namespace std;
int main() 
{
	int t=0;
	cin>>t;
	while(t--)
	{
	    ll n=0;
	    ll k=0;
	    cin>>n>>k;
	    ll a[k];
	    ll sc[n];
	    for(ll i=0;i<n;i++)
	    {
	        sc[i]=0;
	    }
	    for(ll i=0;i<k;i++)
	    {
	        cin>>a[i];
	    }
	    string s[n];
	    for(ll i=0;i<n;i++)
	    {
	        cin>>s[i];
	    }
	    for(ll i=0;i<n;i++)
	    {
	        for(ll j=0;j<k;j++)
	        {
	        if(s[i].at(j)!='0')
	        {
	            sc[i]=sc[i]+a[j];
	        }
	        }
	   }
	    for(ll i=0;i<n;i++)
	    {
	        cout<<sc[i]<<endl;
	    }
	}
}
