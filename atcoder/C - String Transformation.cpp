#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    int i,j,k;
    int x,y;
    map <char,char> mymap;
    char temp1,temp2,ch;
    string a,b,c;
    cin>>a>>b;
    for(i=0;i<a.size();i++)
    {
        mymap[a[i]]=a[i];
    }
    for(x=0,i=0;i<a.size();i++)
    {
        if(mymap.find(a[i])==mymap.end())//&&(mymap.find(b[i])==mymap.end()))
        {
            mymap[a[i]]=b[i];

           if(mymap.find(b[i])!=mymap.end()) {mymap[b[i]]=a[i];}

           cout<<mymap[b[i]]<<" ";
           cout<<mymap[a[i]]<<endl;

           // x++;
        }
        else {
             temp1=mymap[a[i]];//p
             //temp2=mymap[b[i]];//z
        if(temp1!=b[i]){x=1;}
            cout<<mymap[a[i]];
            cout<<" "<<x<<endl;
            }
    }

    if(x==1)cout<<"No\n";
    else cout<<"Yes\n";

  return 0;
}
