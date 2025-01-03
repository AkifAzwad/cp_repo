#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    int i,j=1,k;
    int a[12],b[12];
    int lot;
    while(1){
    cin>>lot;
    if(lot<0)
    {
        break;
    }
    for(i=0;i<12;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<12;i++)
    {
        cin>>b[i];
    }
    printf("Case %d:\n",j++);
    for(i=0;i<12;i++)
    {
        if(lot>=b[i])
        {
            cout<<"No problem! :D"<<"\n";
            lot-=b[i];
            lot+=a[i];
        }
        else
        {
            cout<<"No problem. :("<<"\n";
            lot+=a[i];
        }
    }
    }
  return 0;
}
