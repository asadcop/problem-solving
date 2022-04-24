#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  string s;
  cin>>s;
  while (t--)
  {
    
    int siz=s[0]-'A';
    int c=0;
    
      vector<int>v[siz+1];
      bool vi[siz+1];
      memset(vi,false,sizeof vi);   
    while (cin>>s)
    {
      if(s.size()==1)break;
      int x=s[0]-'A';
      int y=s[1]-'A';
      v[x].push_back(y);
      v[y].push_back(x);
    }
    for (int i = 0; i <= siz; i++)
    {
      
      if(!vi[i])
      {
       
        queue<int> q;
        q.push(i);
        c++;
        while (!q.empty())
        {
          int so=q.front();
          vi[so]=true;
          q.pop();
         // cout<<so<<" ";
          for (int j= 0; j <v[so].size(); j++)
          {
            if(!vi[v[so][j]])q.push(v[so][j]);
          }
          
        }
        
      }
    }
    printf("%d\n",c);
    if(t!=0)printf("\n");    

  }
    
  return 0;
}
