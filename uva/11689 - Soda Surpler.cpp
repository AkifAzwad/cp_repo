#include<bits/stdc++.h>
using namespace std;

int main()
{
    int ans,sum,rem;
    int e,f,c;
    int n;
    cin>>n;
    while(n--){
    cin>>e>>f>>c;
    ans=(e+f)/c;
    rem=(e+f)%c;
    sum=ans;
    ans+=rem;
    while(ans>=c)
    {
        rem=ans%c;
        ans=ans/c;
        sum+=ans;
        ans+=rem;
    }
    cout<<sum<<"\n";
    }
  return 0;
}
