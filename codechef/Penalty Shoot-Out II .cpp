#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
int main()
{

	ll t,n;
	ll i,j,k;
	ll a,b;
	cin>>t;
	while(t--)
	{
		cin>>n;
		string s;
		cin>>s;
		a=b=0;
		ll rem1,rem2;
		rem1=rem2=n;

		
		for ( i = 0; i < s.size(); i+=2)
			{
				
					if(s[i]=='1'){a++;}
					rem1--;

					if(a>b+rem2)
					{
						cout<<"a ";
						cout<<i+1<<endl;
						break;
					}
					else if(b>a+rem1)
					{
						cout<<"b ";
						cout<<i+1<<endl;
						break;
					}
			
					if(s[i+1]=='1'){b++;}
					rem2--;
					if(b>a+rem1)
					{
						cout<<"c ";
						cout<<i+2<<endl;
						break;
					}
					else if(a>b+rem2)
					{
						cout<<"d ";
						cout<<i+2<<endl;
						break;	
					}
						//cout<<rem1<<" "<<rem2<<endl;	
			}	
			
			if(a==b)cout<<2*n<<endl;

	}

	return 0;
}