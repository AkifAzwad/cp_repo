#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    int n,p,q;
    int x,y,z;
    int i,t,k=1;
    cin>>t;
    while(t--){
    cin>>n>>p>>q;
    for(i=1,z=y=0;i<=n;i++){
        cin>>x;
        y+=x;
        if(y<=q&&i<=p){

            z=i;
                }
        }

    printf("Case %d: %d\n",k++,z);
    }
  return 0;
}
