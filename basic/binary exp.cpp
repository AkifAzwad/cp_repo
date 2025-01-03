#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
int pwo(int a,int n)
{
	if(n==0)return 1;
	else if(n%2==0)
	{
		return pwo(a,n/2)*pwo(a,n/2);
	}
	else 	
	{
		return pwo(a,n-1)*a;
	}

}
int bigmo(int a,int n,int m)
{
	if(n==0)return 1;
	else if(n%2==0)
	{
		return ((bigmo(a,n/2,m)%m)*(bigmo(a,n/2,m)%m))%m;
	}
	else 	
	{
		return (bigmo(a,n-1,m)%m*a%m)%m;
	}

}
void fib(int n)
{
	if(n<1)return ;
	cout<<n<<"\n";
	fib(n/2);
	cout<<" "<<n<<"\n";
}
int main()
{

	int a,n;
	cin>>a>>n;
	fib(n);

	return 0;
}
