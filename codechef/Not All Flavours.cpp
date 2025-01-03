#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
int main()
{

	int i,j,k;
	int n,t;
	int sum,ans;
	int x,y,z;
	int l,r;
	cin>>t;
	while(t--){
	cin>>n>>k;
	int a[n+1],b[k+1]={0};
	set<int> s;
	for ( i = 1; i <= n; ++i)
	{
		cin>>a[i];
	}
	
	
	ans=0;x=0;l=1;r=0;
	for ( i = 1; i <= n; ++i)
	{
		if(b[a[i]]==0)
		{
			
			x++;
			b[a[i]]++;
			r++;
			
			if(x>k-1)
			{	
				x=0;
				memset(b,0,sizeof(b));
				if(r-l>ans)ans=r-l;
				for ( j=r ; j>=l ; --j)
						{
							s.insert(a[j]);
							if(b[a[j]]==0){x++;}
							
							if(s.size()==k){
								y=j+1;
								break;
							}
							
							b[a[j]]++;

						}
						l=y;
						//cout<<i<<" 1 "<<r<<" "<<l<<endl;
						s.clear();
			}
			

		}
		else {
			b[a[i]]++;
			r++;
			//cout<<"2 "<<r<<" "<<l<<endl;
			
		}		
	}
		
		//cout<<r<<" "<<l<<endl;
		if(r-l+1>ans)ans=r-l+1;

	cout<<ans<<endl;
	}
	return 0;
}