#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{

    int x,i,e,a,t,k=1;
    cin>>t;
    while(t--){
    string s1,s2;
    map <string,int> mymap;
    int matrix[1000][1000];
    cin>>e;
    for(a=1,x=i=0;i<e;i++)
    {
        cin>>s1;
        if(mymap.find(s1)==mymap.end())
        {
            mymap[s1]=a++;
        }
        cin>>s2;
        if(mymap.find(s2)==mymap.end())
        {
            mymap[s2]=a++;
        }
        int u=mymap[s1];
        int v=mymap[s2];
        if(matrix[v][u]==0)matrix[u][v]=1;
        else{
        x=1;
        }
    }
    if(x==1)printf("Case %d: No\n",k++);
    else printf("Case %d: Yes\n",k++);
}
  return 0;
}
