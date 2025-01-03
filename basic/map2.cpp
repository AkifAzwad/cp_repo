#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
int input[11]={-102,1,134565589,134565589,-102,66666668,134565589,66666668,-102,1,-2};

int main()
{
    map<int,int> mymap;
    int i,x,assign=0,cmp[100],c=0;
    for(i=0;i<11;i++)
    {
        //x=input[i];
        if(mymap.find(input[i])==mymap.end())
        {
            mymap[x]=assign++;
        }
        cmp[c++]=mymap[x];
    }
    for(i=0;i<c;i++)
    {
        x=input[i];
        cout<<x<<" ";
        cout<<cmp[i]<<endl;
    }
  return 0;
}
