#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    int a[4];
    int i,n;
    int t;

    cin>>t;
    while(t--)
    {
        for(i=0;i<4;i++)
        {
            cin>>a[i];
        }
        sort(a,a+4);
        if(a[0]+a[1]+a[2]>a[3])
        {
            if(a[0]==a[1]&&a[1]==a[2]&&a[2]==a[3]&&a[3]==a[1])
            {
                printf("square\n");
            }
            else if(a[0]==a[1]&&a[2]==a[3])
            {
                printf("rectangle\n");
            }
            else
            {
                printf("quadrangle\n");
            }
        }
        else
        {
            printf("banana\n");
        }
    }
  return 0;
}
