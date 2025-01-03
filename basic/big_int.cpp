#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
#define max 500
int arr_size;
int arr[max];
void mult(int x)
{
	int prod,carry=0,i;
	
	for(i=0;i<arr_size;i++)
	{
		prod=(arr[i]*x)+carry;
		arr[i]=prod%10;
		carry=prod/10;
	}
	while(carry)
	{
		arr[arr_size++]=carry%10;
		carry/=10;
	}
}
void fact(int n)
{
	int i;
	arr[0]=1;
	arr_size=1;
	for(i=2;i<=n;i++)
	{
		mult(i);
	}
}
int main()
{

	int i,n;
	cin>>n;
	fact(n);
	for (int i = arr_size-1; i >= 0; i--)
	{
		cout<<arr[i];
	}
	return 0;
}