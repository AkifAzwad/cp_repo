#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    long long n,d,t;
    long long x,y,z;
    long long i,j,p,q;
    int min;
    cin>>t;
    while(t--){
    cin>>n>>d;

        for(y=x=0,z=n,j=1,i=1,q=n%10;z!=0;)
        {

            if(((z%10)<d)&&((z%10)<=q))
            {
                q=z%10;
                x=x+((z%10)*j);

                j*=10;
            }
            else{
            y=(y*10)+d;i*=10;

            }
            z=z/10;
            }

            x=(x*i)+y;
            cout<<x<<"\n";
    }
  return 0;
}
