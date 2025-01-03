#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
int main()
{

	int i,j,k;
	int n,t;
	int pc,pr;

	cin>>t;
	while(t--)
	{
		cin>>pc>>pr;
		int x=0,y=0;
		int cntx=0,cnty=0;
		cntx+=(pc/9);
		if(pc%9)cntx++;

		cnty+=(pr/9);
		if(pr%9)cnty++;
		
		if(cntx==cnty)cout<<"1 "<<cntx<<endl;
		else {
			if(cntx<cnty)cout<<"0 "<<cntx<<endl;
			else cout<<"1 "<<cnty<<endl;
		}
	}


	return 0;
}