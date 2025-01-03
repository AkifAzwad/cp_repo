#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    long long i,j,k;
    long long n;
    long long M=9999999999;
    cin>>n;
    long long a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    long long s1,s2,l1,l2;
    for(i=0;i<n;i++)
    {
        s1=s2=M;
        l1=l2=0;
        if(i+1<n){
        s1=a[i+1]-a[i];
        }
        if(i-1>-1){
        s2=a[i-1]-a[i];
        }
        s1=abs(s1);s2=abs(s2);
        cout<<min(s1,s2);
        l1=a[n-1]-a[i];
        l2=a[0]-a[i];
        l1=abs(l1);l2=abs(l2);
        cout<<" "<<max(l1,l2)<<endl;
    }
  return 0;
}
