#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    int ans;
    long n;
    while(1)
    {
        cin>>n;
        if(n==0)
        {
            break;
        }
        if(n%9==0)
        {
            printf("9\n");
        }
        else
        {
            printf("%d\n",n%9);
        }
    }
  return 0;
}
