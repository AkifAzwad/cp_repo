#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
int main()
{

	int i,j,k;
	int l,r,ans1,ans2;
	int n,m,a,b,x,y;
	int mid;
	cin>>x>>n>>y>>m;
	l=1,ans1=x,r=(y-x)/n;
	if(r==0)
	{
		cout<<max(x,y);
	}
	else{
	j=0;
	while(l<=r)
	{
		
		mid=l+(r-l)/2;
		//cout<<mid<<" "<<x+(n*mid)<<" "<<y-(m*mid)<<endl;
		
		 if(x+(n*mid)<=y-(m*mid))
		{
			
			if(x+n*(mid+1)>=y-(m*mid))
			{
				ans1=y-(m*mid);
				break;		
			}
			l=mid+1;
		}
		else {
			ans1=x+(n*mid);
			r=mid-1;
		}
		
		//cout<<ans1<<" "<<ans2<<endl;
			
	}
		cout<<ans1;
	}
	return 0;
}