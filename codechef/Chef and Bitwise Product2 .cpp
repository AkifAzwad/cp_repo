#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long

int main()
{

	ll i,j,k;
	ll x,y,l,r;
	ll z1,z2,z3,z4;
	ll p,n,m,sum,hi;
	ll t;
	cin>>t;
	while(t--){
	cin>>x>>y>>l>>r;
	if(x==0||y==0)cout<<"0\n";
	else{
	z1=x;z2=y;z3=l;z4=r;
	
	int a[50],b[50],c[50];
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	memset(b,0,sizeof(c));

	i=0;
    while (x > 0) { 
  
       
        a[i] = x % 2; 
        x = x / 2; 
        i++; 
    }
    x=i-1;
    i=0;
    while (y > 0) { 
  
       
        b[i] = y % 2; 
        y = y / 2; 
        i++; 
    }
	y=i-1;
   	i=0;
   	while (r > 0) { 
  
       
        c[i] = r % 2; 
        r = r / 2; 
        i++; 
    }
    l=i-1;
  
  	if(i<=l)cout<<i<<endl;
   	hi=0;
  	 for ( i = 0; i <= l; ++i)
   	{
   		for ( j = 0,sum = 0; j < i ; ++j)
    	{	
    	
    		if(a[j]==1||b[j]==1)
    		{
    		sum+=pow(2,j);
    		} 
    	}
    	if(sum>hi)hi=sum;
	}
   cout<<hi<<endl;
		}

	}
	return 0;
}