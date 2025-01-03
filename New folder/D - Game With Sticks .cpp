#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    int n,m,ans;
    int b;
    cin>>n>>m;
    b=0;
    while(1)
    {
        n--;
        m--;
        if(b==0)
        {
            b=1;
        }
        else
        {
            b=0;
        }
        if(n==0||m==0)
        {
            break;
        }
    }

      if(b==0){printf("Malvika\n");}
    else {printf("Akshat\n");}
  return 0;
}
