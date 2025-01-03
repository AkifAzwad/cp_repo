#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
vector <int> v[10];
int vis[10],level[10];

void bfs(int s)
{

    int i;

    queue <int> q;
    q.push(s);
    level[s]=0;
    vis[s]=1;
    while(!q.empty())
    {
        int p=q.front();
        q.pop();
        for(i=0;i<v[p].size();i++)
        {
            if(vis[v[p][i]]!=1){
            level[v[p][i]]=level[p]+1;
            q.push(v[p][i]);
            vis[v[p][i]]=1;
            }
        }
    }
}
int main()
{
   int s,i,j,k;
   int n,e;
   int x,y;
   memset(level,-1,sizeof(level));
   cin>>n>>e;
   for(i=0;i<e;i++)
   {
       cin>>x>>y;
       if(x!=y)v[x].push_back(y);
   }
   s=1;
   bfs(s);

   for(i=0;i<10;i++)
   {
       cout<<i<<" ";
       cout<<level[i]<<endl;
   }
    return 0;
}
/*6 8
1 2
1 4
2 4
2 5
4 5
5 3
3 6
6 6
*/
