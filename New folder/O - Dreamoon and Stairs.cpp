#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    int i,j,k;
    int ans;
    int n,m;
    cin>>n>>m;
    if(n<m)
    {
       cout<<"-1\n";
    }
    else{
    i=n/2;
    while(i>=0){

    j=n-(i*2);
    if((i+j)%m==0)
    {

        break;
    }
    else
    {
        i--;

    }
    }
    if(((2*i)+j)==n)
    {
        cout<<i+j<<endl;
    }
    else
    {
        cout<<"-1\n";
    }

    }
    /*if(n<=m)
    {
        if(n<m)cout<<"-1\n";
        else cout<<"1\n";
    }
    else{
    for(i=0;((i*2)<=n);i+=m)
    {
        if(i%m!=0)
        {
            continue;
        }
        k=i*2;
        cout<<i<<endl;
    }
   // cout<<k;
    }*/
  return 0;
}
