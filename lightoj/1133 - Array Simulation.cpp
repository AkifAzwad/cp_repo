#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    int n,m,t;
    int i,j,k,l,x=1;
    int y,z;
    char ch;
    cin>>t;
    while(t--){
    cin>>n>>m;
    int a[n],temp[n];
    for(i=0;i<n;i++)cin>>a[i];
    for(i=0;i<m;i++)
    {
        cin>>ch;
        if(ch=='S'){cin>>k;for(j=0;j<n;j++)a[j]+=k;}
   else if(ch=='M'){cin>>k;for(j=0;j<n;j++)a[j]*=k;}
   else if(ch=='D'){cin>>k;for(j=0;j<n;j++)a[j]/=k;}
   else if(ch=='R'){
                    for(j=n-1,l=0;j>-1;j--,l++)temp[l]=a[j];
                    for(j=0;j<n;j++)a[j]=temp[j];
                   }
   else if(ch=='P'){cin>>y>>z;swap(a[y],a[z]);}
    }
    printf("Case %d:\n",x++);
    for(j=0;j<n;j++)
        {
            printf("%d",a[j]);
            if(j!=n-1)printf(" ");
        }
    cout<<"\n";
    }
  return 0;
}
