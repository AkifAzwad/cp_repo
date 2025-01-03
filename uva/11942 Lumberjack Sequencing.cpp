#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
int main()
{
    int i,j;
    int n;
    int a[10];
    cin>>n;
    printf("Lumberjacks:\n");
    while(n--)
    {
        for(i=0;i<10;i++)
        {
            cin>>a[i];
        }
        if(a[0]>a[9])
        {
           for(j=1;j<10;j++)
           {
               if(a[j]>a[j-1])
               {
                    printf("Unordered\n");
                    break;
               }
           }
           if(j==10)
           {
               printf("Ordered\n");
           }
        }
        if(a[0]<a[9])
        {
           for(j=1;j<10;j++)
           {
               if(a[j]<a[j-1])
               {
                    printf("Unordered\n");
                    break;
               }
           }
           if(j==10)
           {
               printf("Ordered\n");
           }
        }

    }
  return 0;
}
