#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    int i,j,k;
    int n,m;
    cin>>n>>m;
    for(k=m,j=i=1;;i++)
    {

        if(i==k)
        {
            n++;
            j++;
            k=j*m;
        }
    //    cout<<i<<" "<<n<<" "<<k<<endl;
        n--;
        if(n==0)break;
    }
    cout<<i<<endl;
  return 0;
}
