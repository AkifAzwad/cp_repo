#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
int main()
{

	ll i,j;
	ll n,k;
	ll ans;

	cin>>n>>k;
	ll a[n+1];
	
	for ( i = 1; i <= n; ++i)
	{
		cin>>a[i];
		
	}
	
	
	stack<ll> S; 
  	std::vector<ll> v1;
    
    for (ll i=n; i>=0; i--) 
    {  
    	while (!S.empty() && a[S.top()] >= a[i]) 
           {
            S.pop(); 
  			}
      
        if (S.empty()) v1.push_back(-1); 
        
        else   v1.push_back(S.top()); 
  
         
        S.push(i); 
    }
    ans=1;
	ll f;
    for ( i = n-1,j=1; i > -1; --i,j++)
    {
    	if(v1[i]!=-1)
    	{
    		f=v1[i]-j+1;
    		ans=((ans%1000000007)*(f%1000000007))%1000000007;
    	}
    }
	cout<<ans%1000000007<<endl;
	return 0;
}	