#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
int main()
{

	ll i,j,k;
	ll n,t;
	ll y,z;
	ll a,b,c;
	
	cin>>n;
	int v[n];
	for ( i = 0; i < n; ++i)
	{
		cin>>v[i];
	}

	stack<int> x;
	ll ans1,pos1,ans2,pos2;
	ans1=0;pos1=-1;ans2=0;pos2=-1;
	a=0;b=1;y=0;z=0;
	for ( i = 0; i < n; ++i)
	{
		a++;
		if(v[i]==1){
			x.push(1);
			if(x.size()==1){b=i+1;}
			y=i+1;//'('-index
			z++;//nesting depth
		}
		else
		{
			if(z>ans1){ans1=z;pos1=y;}
			z--;
			x.pop();
			if(x.empty()){
				if(a>ans2){ans2=a;pos2=b;}
				a=0;z=0;
			}
			
		}
		
	}
	cout<<ans1<<" "<<pos1<<" "<<ans2<<" "<<pos2<<endl;
	return 0;
}