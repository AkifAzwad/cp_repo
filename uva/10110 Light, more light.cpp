#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
int main()
{
    unsigned int i,j;

 while(1){
    cin>>i;
    if(i==0)break;
    j=sqrt(i);

    if(j*j==i)cout<<"yes"<<"\n";
    else cout<<"no"<<"\n";
 }
  return 0;
}
