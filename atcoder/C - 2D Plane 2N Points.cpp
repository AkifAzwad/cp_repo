#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long


int main()
{

	int n;
	int i,j,k;
	cin>>n;
	using p=pair <int,int>;
	vector < p > f(n),s(n);
	for(i=0;i<n;i++)
	{
		cin>>f[i].first>>f[i].second;
	}
	for(i=0;i<n;i++)
	{
		cin>>s[i].first>>s[i].second;
	}
	sort(f.begin(),f.end());
	sort(s.begin(),s.end());
	int ind,max,ans=0;
	vector<bool> used(n);
	for(i=0;i<n;i++)
	{
		ind=-1;
		max=-1;
		for(j=0;j<n;j++)
		{
			if(!used[j]&&f[j].first<s[i].first&&f[j].second<s[i].second&&max<f[j].second)
			{
				ind=j;
				max=f[j].second;
			}		
		}
		if(ind!=-1){ans++;
		used[ind]=true;}
	}
	
	cout<<ans;
	return 0;
}