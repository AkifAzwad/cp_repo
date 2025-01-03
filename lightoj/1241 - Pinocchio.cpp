#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    int i,j,k=1;
    int n,m,x,count,t;
    cin>>t;
    while(t--){
    cin>>n;

    for(x=2,count=i=0;i<n;i++)
    {
        cin>>m;
        if(m>x)
        {
            if((m-x>=1)&&(m-x<=5)){count++;}
            else{
                count=count+((m-x)/5);

                if(((m-x)%5)!=0)count++;
            }
        }
        x=m;

    }
     printf("Case %d: %d\n",k++,count);
    }
  return 0;
}
