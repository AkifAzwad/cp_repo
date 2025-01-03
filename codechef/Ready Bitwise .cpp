#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
ll modInverse(ll a, ll m) 
{ 
    ll m0 = m; 
    ll y = 0, x = 1; 
  
    if (m == 1) 
      return 0; 
  
    while (a > 1) 
    { 
        
        ll q = a / m; 
        cout<<q<<endl;
        ll t = m; 
  
        
        m = a % m, a = t; 
        t = y; 
  
      
        y = x - q * y; 
        x = t; 
    } 
  
   
    if (x < 0) 
       x += m0; 
  
    return x; 
}  
int main()
{

	ll i,j,k;
	ll x,y;
	string s;
	ll n,t;
	cin>>t;
	while(t--){
	cin>>s;
	pair < ll,ll > p;
	p={1,1};
	stack <char> q;
	char a[100002];
	for ( i = 0,j = 0,k = 1; i < s.size(); ++i)
	{
		if(s[i]=='&'||s[i]=='|'||s[i]=='^')
		{	
			
			q.push(s[i]);
		}
		else if(s[i]==')')
		{
			
		if(!q.empty()){
				a[j++]=q.top();
				q.pop();
			}
		}
		if(s[i]=='#')
		{
			k*=4;
		}
	}

	while(!q.empty())
	{
		a[j++]=q.top();
		q.pop();
	}
	for ( i = 0; i < j; ++i)
	{
		cout<<a[i];
	}
	/*if(j==0&&k==1)
	{
		cout<<"0 "<<"0 "<<"0 "<<"0\n";
	}
	else{
	for ( i = 0,x = 1; i < j; ++i)
	{
		if(a[i]=='&')
		{
			x*=2;
			p.first+=x;
		}
		else if(a[i]=='|')
		{
			x*=2;
			p.second+=x;
		}
		else if(a[i]=='^')
		{
			x*=2;
			
			p.first=x;
			p.second=x;
		}
		
	}

	//cout<<p.first<<" "<<p.second;
	x=(p.first)*(p.first);
	y=(p.second)*(p.second);
	j=k-x-y;
	j/=2;
	
	ll m=998244353,a1,a2;
	i=modInverse(k,m);
	//c=((p%m)*(x%m))%m;
	//x=((x%m)*(i%m))%m;
	//y=((y%m)*(i%m))%m;
	//a1=a2=((j%m)*(i%m))%m;
	
	cout<<(x*i)%m<<" "<<(y*i)%m<<" "<<(j*i)%m<<" "<<(j*i)%m<<"\n";
	}
	*/
	}
	return 0;
}