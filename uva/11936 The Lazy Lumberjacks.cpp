#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int a,b,c;
    scanf("%d",&n);
    while(n--)
        {
            scanf("%d%d%d",&a,&b,&c);
    if(a+b>c&&b+c>a&&c+a>b)
    {
        printf("OK\n");
    }
    else
    {
        printf("Wrong!!\n");
    }
        }
  return 0;
}
