#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
int main()
{

	int t,i,j,k;
	int n,m,p;
	int sum;

	cin>>t;
	while(t--){
	int a[5];
	cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4]>>p;
	sum=0;
	for ( i = 0; i < 5; ++i)
	{
		sum+=a[i]*p;
	}
	if(sum<=120)cout<<"No\n";
	else cout<<"Yes\n";
	}
	return 0;
}