#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long

int main()
{

	ll i,j,k,l;
    ll n,t;
    
    cin>>t;
    while(t--)
    {
    cin>>n;
    if(n==1)
    {
    	cout<<"1\n";
    	cout<<"1 1\n";
    }
    else{
    	j=n/2;
    
    
    cout<<j<<"\n";
	if(n%2==0){
		for ( i = 1; i<=n; i+=2)
		{
			cout<<"2 "; 
			
			 cout<<i<<" "<<i+1<<"\n";
			
			
		}
	}
	else
	{
		for ( i = 1; i<n; i+=2)
		{
			if(i==1) 
		   {
		   	cout<<"3 ";
		   	cout<<i<<" "<<i+1<<" "<<n<<"\n";
		   }
			else
			{
			cout<<"2 ";
		   	cout<<i<<" "<<i+1<<"\n";
		   
			}
			
		}	
	}
	
	}
    
    	
    }
	return 0;
}