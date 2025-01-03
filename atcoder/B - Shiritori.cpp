#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    int i,j,k,n;
    int x,y;
    string name;
    char ch;
    string :: iterator it;
    map <string,int> mymap;
    cin>>n;
    cin>>name;
    mymap[name]++;
    it=name.end()-1;
    ch=*it;
    n--;
    x=y=0;
    while(n--)
    {
    cin>>name;

    it=name.begin();

    if(ch==*it)
    {
        mymap[name]++;

        if(mymap[name]>1)x=1;

    it=name.end()-1;
    ch=*it;
    }
    else y=1;
    }
    if(x==1||y==1){cout<<"No\n";}
    else cout<<"Yes\n";
  return 0;
}
