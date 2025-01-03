#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    long long n,i,j,temp,ans,t;
    cin>>t;
    while(t--){

    cin>>n;
    char a[n+5],x;
    scanf("%s %c",a,&x);
    ans=((n*n)+n)/2;
    temp=j=0;
    for(i=0;a[i]!='\0';j++,i++)
    {
        if(a[i]==x)
        {
            temp+=((j*j)+j)/2;
            j=-1;

        }
    }
    temp+=((j*j)+j)/2;
    ans-=temp;
    cout<<ans<<endl;
    }
  return 0;
}
