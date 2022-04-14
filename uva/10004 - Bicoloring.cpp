#include <bits/stdc++.h>
using namespace std;
int main()
{
 
  int n,m;
  while (cin>>n)
  {
    if(n==0)break;
    cin>>m;
    int a,b;
    vector<int>nod[m+10];
    int v[n+5]={0};
    int coloar[n+5]={0};
    while(m--)
    {
      cin>>a>>b;
      nod[a].push_back(b);
      nod[b].push_back(a);
    }
    bool is=false;
    queue<int>q;
    q.push(0);
    v[0]=1;
    coloar[0]=1;
    while (!q.empty())
    {
      int d=q.front();
      q.pop();
      for (int i = 0; i < nod[d].size(); i++)
      {
        int f=nod[d][i];
        if(coloar[d]==coloar[f])
        {
          is=true;
        //  cout<<d<<" "<<f<<endl;
          break;
        }
        else if(v[f]==0)
        {
          coloar[f]=3-coloar[d];
          q.push(f);
          v[f]=1;
        }
      }
      if(is)break;
      
    }
    if(is)cout<<"NOT BICOLORABLE.\n";
    else cout<<"BICOLORABLE.\n";
    while (!q.empty()) q.pop();
    nod->clear();
    
  }
  
  return 0;
}
