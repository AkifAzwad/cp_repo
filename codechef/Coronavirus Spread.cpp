#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
int main()
{

	int i,j,k;
	int t;
	int n;
	cin>>t;
	while(t--){
	cin>>n;
	int a[n];
	for ( i = 0; i < n; ++i)
	{
		cin>>a[i];
	}
	int hi,lo;
	hi=-1;
	lo=100;
	int x,y;
	std::vector<int> v;;
	for ( i = 0; i < n; ++i)
	{
		x=y=0;
		for ( j = i,x = 0; j+1 < n; ++j)
		{
			if(a[j+1]-a[j]<=2)
			{
				x++;
			}
			else break;	
		}
		for ( k = i,y = 0; k-1 >= 0; --k)
		{
			if(a[k]-a[k-1]<=2)
			{
				y++;
			}
			else break;			
		}
		//cout<<x<<":"<<y<<endl;
		v.push_back(x+y);
	}
	sort(v.begin(),v.end());
	
	cout<<v[0]+1<<" "<<v[n-1]+1<<endl;
	}
	return 0;
}