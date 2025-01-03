#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
int main()
{

	int i,j,k;
	int x,y,t;	
	cin>>t;
	while(t--){
	cin>>x>>y;
	i=x,j=y;
	if(x==1&&y==1)
	{
		cout<<"25\n";
	}
	else if(x==y)
	{
		cout<<"26\n";
		cout<<"1 1\n";
	}
	else if(x>y){
	for (i=x,j=y ; j <= 8; )
	{
		i--;j++;
		if(i==j)
		{
			cout<<"27\n";
			cout<<i<<" "<<j<<endl;
			cout<<"1 1\n";
			break;
		}
	}
		}
	else
	{
	for (i=x,j=y ; i <= 8; )
	{
		i++;j--;
		if(i==j)
		{
			cout<<"27\n";
			cout<<i<<" "<<j<<endl;
			cout<<"1 1\n";
			break;
		}
	}
	}
	
	cout<<"2 2\n3 1\n1 3\n2 2\n3 3\n5 1\n1 5\n3 3\n4 4\n7 1\n1 7\n4 4\n5 5\n8 2\n2 8\n5 5\n6 6\n8 4\n4 8\n6 6\n7 7\n8 6\n6 8\n7 7\n8 8\n";
	}
	return 0;
}