#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    int x,y;
    int a1,b1;
    int a2,b2=-0;
    int n;
    cin>>n;
    while(n--){
    cin>>x>>y;
    a1=(x+y)/2;
    b1=(x-y)/2;
    if(a1+b1!=x||x<y)
    {
        printf("impossible\n");
    }
    else
    {
        printf("%d %d\n",a1,b1);
    }
    }
  return 0;
}
