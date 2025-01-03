#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    int i,j,k;
    int a,b;
    cin>>a>>b;
    for(j=a,i=1;;i++)
    {
        if(i%b==0)
        {
            j++;
        }
        j--;
        if(j==0)break;

    }
    cout<<i<<endl;
        return 0;
}
