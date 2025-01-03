#include <bits/stdc++.h>
#define ll long long

using namespace std;
///Code starts from here
void solve()
{
     
    {
        ll n,i,j,l,k,ans=0,temp=0,cnt=0,x,mn=INT_MAX;
        int flag=0;
        cin>>n>>k;
        ll a[n];
        vector<ll>value;
        vector<string>vt;
        string s="";
        map<ll,ll>mp;
        for(i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<n;i++)
        {
            if(!mp[a[i]])
            {
                mp[a[i]]++;
            }
            else if(mp[a[i]]==1)
            {
                cnt+=2;
                mp[a[i]]++;
            }
            else
            {
                mp[a[i]]++;
                cnt++;
            }
        }
        x=k+cnt;
        value.push_back(x);
        mp.clear();
        cnt=0;
        for(i=0;i<n;i++)
        {
            if(!mp[a[i]])
            {
                mp[a[i]]++;
                s+=(a[i]+'0');
            }
            else
            {
                mp.clear();
                vt.push_back(s);
                s="";
                i--;
            }
        }
        mp.clear();
        vt.push_back(s);
        x=k*vt.size();
        value.push_back(x);
        for(i=1;i<n;i++)
        {
            cnt=0;
            mp.clear();
            for(j=0;j<i;j++)
            {
                if(!mp[a[j]])
                {
                    mp[a[j]]++;
                }
                else if(mp[a[j]]==1)
                {
                    cnt+=2;
                    mp[a[j]]++;
                }
                else
                {
                    mp[a[j]]++;
                    cnt++;
                }
            }
            mp.clear();
            for(j=i;j<n;j++)
            {
                if(!mp[a[j]])
                {
                    mp[a[j]]++;
                }
                else if(mp[a[j]]==1)
                {
                    cnt+=2;
                    mp[a[j]]++;
                }
                else
                {
                    mp[a[j]]++;
                    cnt++;
                }
            }
            mn=min(cnt,mn);
        }
        x=2*k+mn;
        value.push_back(x);
        sort(value.begin(),value.end());
        ans=value[0];
        cout<<ans<<endl;
        vt.clear();
        mp.clear();
      
    }
}
int main()
{
    
    int t,kase=1;
    cin>>t;
   while(t--)
   {
    solve();
   }
    return 0;
}