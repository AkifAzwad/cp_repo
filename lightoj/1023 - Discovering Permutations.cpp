#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
int main()
{
	int n,k,temp,i=1,t;
	cin>>t;
	while(t--){
	string s="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	cin>>n>>k;
	printf("Case %d:\n",i++);
	s.erase(s.begin()+n,s.end());
	cout<<s<<endl;
	if(n<5)
	{
		 temp=1;
		for(int i=1;i<=n;i++)
		{
			temp*=i;
		}
		temp=min(temp,k)-1;
	}
	else
		{temp=k-1;}

	while(temp--)
	{
		next_permutation(s.begin(),s.begin()+n);
		
		cout<<s<<endl;

	}
}
	return 0;
}