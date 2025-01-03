#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
int main()
{
	int t;
	int x1,y1,x4,y4;
	int a1,b1,a4,b4;
	
	cin>>t;
	while(t--){
	
	cin>>x1>>y1>>x4>>y4;
	cin>>a1>>b1>>a4>>b4;
	int m1=-1,n1=-1,m4=-1,n4=-1;

	if(a1>=x1&&a1<=x4)
	{
		m1=a1;
	}
	else if(x1>=a1&&x1<=a4)
	{
		m1=x1;
	}
	if(b1>=y1&&b1<=y4)
	{
		n1=b1;
	}
	else if(y1>=b1&&y1<=b4)
	{
		n1=y1;
	}


	if(a4>=x1&&a4<=x4)
	{
		m4=a4;
	}
	else if(x4>=a1&&x4<=a4)
	{
		m4=x4;
	}
	if(b4>=y1&&b4<=y4)
	{
		n4=b4;
	}
	else if(y4>=b1&&y4<=b4)
	{
		n4=y4;
	}
	if(m1==-1||n1==-1||m4==-1||n4==-1||m1==m4||n1==n4)
	{
		cout<<"No Overlap";
		if(t!=0){cout<<"\n\n";}
		if(t==0){cout<<"\n";}
	}
	else
	{
		cout<<m1<<" "<<n1<<" "<<m4<<" "<<n4;
		if(t!=0){cout<<"\n\n";}
		if(t==0){cout<<"\n";}
	}
	
	}
	return 0;
}