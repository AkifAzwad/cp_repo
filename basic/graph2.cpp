#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
 int in[6],out[6];
int main()
{
    int i,j,k;
    int u,v,n,e;
    vector <int> edge[100];
    vector <int> cost[100];
    vector <int> :: iterator it;
    cin>>n>>e;

    for(i=1;i<=e;i++)
    {
        cin>>u>>v;
        if(find(edge[u].begin(),edge[u].end(),v)==edge[u].end()){
        if(u!=v){
        edge[u].push_back(v);
        //edge[v].push_back(u);
        cost[u].push_back(1);
        //cost[v].push_back(1);
        in[v-1]++;
        }
    }
    }
    for(i=1;i<=n;i++)
    {

        cout<<i<<" - ";

        for(it=edge[i].begin();it<edge[i].end();it++)
        {
            //it=edge[i].begin();
            cout<<*it<<" ";
        }
        out[i-1]=edge[i].size();
        cout<<endl;
        cout<<in[i-1]<<" "<<out[i-1]<<endl;
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
