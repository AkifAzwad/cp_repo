#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    int y,z;
    int n,x,i,g,len;
    string s;
   while(1){
    cin>>g;
    if(g==0)
    {
        break;
    }
    getchar();
    getline(cin,s);

    x=s.size()/g;

    for(i=0;i<s.size();i++)
    {
        if((i+1)%x==0){
            y=i-(x-1);
            z=i+1;
    reverse(s.begin()+y,s.begin()+z);
        }
    }

    cout<<s<<"\n";
   }
  return 0;
}
