#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
int main()
{

	int n,m,x,y;
	cin>>n>>m;
	n++;m++;
	x=((n/9)+(n%9));
	y=((m/9)+(m%9));
	cout<<x*y;
	return 0;
}