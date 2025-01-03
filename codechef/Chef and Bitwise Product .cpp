#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
ll pwr(ll x)
{
	ll i,sum=1;
	for ( i = 1; i <= x; ++i)
	{
		sum*=2;
	}
	return sum;
}
int main()
{
	std::ios::sync_with_stdio(false);
	ll i,j,k;
	ll x,y,l,r;
	ll a,b,d;
	
	int t;
	cin>>t; 
	while(t--)
	{
		cin>>x>>y>>l>>r;
		/*unsigned char max=1;
		for ( i = 1; i <= r; ++i)
		{
			a=i;
			n=x&a;m=y&a;
			printf("%d %d %d\n",n,m,n*m );
			if(n*m>max)max=n*m;
		}
		printf("%d\n",max );
		*/
		/*
		if(x==0||y==0)
		{
			cout<<"0\n";
		}
		if(!(x&(x-1))||!(y&(y-1)))
		{
				if(!(x&(x-1))&&!(y&(y-1)))
				{	if(x==y)
					{
						if(x<=r)cout<<x<<endl;
						else cout<<"0\n";
					}
					else if(x+y<=r)cout<<x+y<<endl;
					else cout<<"0\n";
				}
				else if(!(x&(x-1)))
				{
					if(x>y)
					{
						if(x+y<=r)cout<<x+y<<endl;
						else if(r>x)
						{
							if(y%2!=0){
								if(r>x)cout<<r<<endl;
								else cout<<"0\n";
							}
							else 
							{
								if(r>x+1)
								{
									if(r%2!=0)cout<<r-1<<endl;
									else cout<<r<<endl;
								}
								else cout<<"0\n";
							}
						}
						else cout<<"0\n";
					}
					else
					{
						if(y<=r)cout<<y<<endl;
						else {
							if(r>=x)cout<<r<<endl;
							else cout<<"0\n";					
						}
					}

				}
				else if(!(y&(y-1)))
				{
					if(y>x)
					{
						if(x+y<=r)cout<<x+y<<endl;
						else if(r>y)
						{
							if(x%2!=0)
							{
							if(r>y)cout<<r<<endl;
							else cout<<"0\n";
							}
							else 
							{
							if(r>y+1)
							{
							if(r%2!=0)cout<<r-1<<endl;
							else cout<<r<<endl;
							}
							else cout<<"0\n";
							}
						}
						else cout<<"0\n";
					}	
					else
					{
						if(x<=r)cout<<x<<endl;
						else 
					 	{
						if(r>=y)cout<<r<<endl;
						else cout<<"0\n";					
					 	}	
				
					}
				}
				else
					{
						if(x<=r)cout<<x<<endl;
						else {
							if(r>=y)cout<<r<<endl;
							else cout<<"0\n";					
						}
					}
		}
		else{
		a=max(x,y);
		if(a<=r){
		b=floor(log2(a));
		
		d=pwr(b+1);
		if(d-1<=r)d--;
		else d=pwr(b)-1;
		a=d;
		}
		else 
		{
			*/
		if(x==0||y==0)cout<<"0\n";
		else{
			unsigned char c;
			unsigned char n,m;
			ll max;
			
			max=0;
		for ( i = l; i <= r; ++i)
		{
			c=i;
			n=x&c;m=y&c;
			//printf("%d %d %d\n",n,m,n*m );
			if(n*m>max)
			{
				max=n*m;a=i;
			}
		}
			
		//}
		cout<<a<<endl;
		}
		
		}
		
	//}
	
	return 0;
}