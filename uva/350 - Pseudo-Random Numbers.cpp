#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
int main()
{

	int k=1;
	ll z,i,m,l;
	while(1){
	cin>>z>>i>>m>>l;
	if(z==0&&i==0&&m==0&&l==0)break;
	ll x=l,y=0;
	int a[10000]={0};
	a[x]=1;
	while(1)
	{
		x=(z*x)+i;
		x%=m;
		a[x]++;
		y++;
		//cout<<x<<endl;
		if(a[x]>1)
		{
			break;
		}
		
	}

	if(x!=l)y--;
	printf("Case %d: %d\n",k++,y);

}
	return 0;
}