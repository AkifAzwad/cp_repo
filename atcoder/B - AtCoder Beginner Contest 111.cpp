#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    int i,j,k;
    int x,y;
    int n;
    cin>>n;
    for(n;n<1000;n++){
        k=n%10;
    for(x=1,i=n;i!=0;)
    {
        j=i%10;
        i/=10;
        if(k!=j){
              x=0;
               break;
        }
    }
    if(x==1){cout<<n<<endl;
    break;}
    }
  return 0;
}
