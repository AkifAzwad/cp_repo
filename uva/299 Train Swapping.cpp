#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    int m,n,i,j;
    int count;
    int a[100];
    cin>>m;
    while(m--){
            cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(count=i=0;i<n;i++)
    {
        for(j=0;j+1<n;j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
                count++;
            }
        }
    }
        printf("Optimal train swapping takes %d swaps.\n",count);
    }
  return 0;
}
