#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
int main()
{

	int i,j,k;
	int n,t;

	cin>>t;
	while(t--)
	{
		//cin>>n;
		int p,h;
		cin>>h>>p;
		while(p)
		{
			h-=p;
			if(h<=0)break;
			p/=2;
			//cout<<h<<" "<<p<<endl;
		}
		if(h>=1)cout<<"0\n";
		else cout<<"1\n";
	}

	return 0;
}