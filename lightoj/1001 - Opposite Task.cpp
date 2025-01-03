#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n>10){printf("%d 10\n",n-10);}
        else {printf("0 %d\n",n);}
    }
  return 0;
}
