#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
int main()
{

	//int d,m,y,c;
	int a,b,n;
	int i,j,k;
	while(1){
	cin>>n;
	if(n==0){break;}
	int d[n],m[n],y[n],c[n]; 
	for ( i = 0; i < n; ++i)
	{
		cin>>d[i]>>m[i]>>y[i]>>c[i];
	}
	for ( a=b=0,i = 1; i < n; ++i)
	{
		if(y[i]==y[i-1])
		{
			if(m[i]==m[i-1])
			{
				if(d[i]-1==d[i-1])
				{
					a++;b+=(c[i]-c[i-1]);
				}
			}
			else if(m[i]-1==m[i-1])
			{
				if(m[i-1]==2){
				if(d[i]==1&&d[i-1]==29)
				{
					a++;b+=(c[i]-c[i-1]);
				}
				else if(d[i]==1&&d[i-1]==28&&y[i]%4!=0&&y[i]%400!=0)
				{
					a++;b+=(c[i]-c[i-1]);
				}
				}
				if(m[i-1]==4||m[i-1]==6||m[i-1]==9||m[i-1]==11)
				{
					if(d[i]==1&&d[i-1]==30)
					{
						a++;b+=(c[i]-c[i-1]);
					}
				}
				else 
				{
					if(d[i]==1&&d[i-1]==31)
					{
						a++;b+=(c[i]-c[i-1]);
					}	
				}
			}
		}
		else if(y[i]-1==y[i-1])
		{
			if(m[i]==1&&m[i-1]==12)
			{
				if(d[i]==1&&d[i-1]==31)
				{
					a++;b+=(c[i]-c[i-1]);
				}
			}
		}
	}
	cout<<a<<" "<<b<<endl;
	}
	return 0;				
}