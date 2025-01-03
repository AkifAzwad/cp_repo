#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
int main()
{

	int n,m;
	int i,j,k;
	while(cin>>n>>m){
	if(__gcd(n,m)==1)
	{
		printf("%10d%10d    Good Choice\n\n",n,m);
	}
	else
	{
		printf("%10d%10d    Bad Choice\n\n",n,m);	
	}
}
	return 0;
}