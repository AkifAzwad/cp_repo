#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    map<string,int> mymap;
    int i,n;
    string goru;
    //cin>>n;

    while(cin>>goru)
    {
        //;
      //  if(mymap.find(goru)==mymap.end())mymap[goru]++;
        if(goru=="moro")break;
        mymap[goru]++;
        cout<<"goru ase "<<mymap[goru]<<endl;
    }
   /* while(i--)
    {
        cout<<mymap.pop();
    }*/
  return 0;
}
