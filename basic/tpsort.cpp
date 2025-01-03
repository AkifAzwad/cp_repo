#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
 
int main()
{
	int i,j,k;
	int m,n;
	int a,b;
	cin>>n>>m;
	int ind[n];
	memset(ind,0,sizeof(ind));
	vector<int> v[100];
	for ( i = 0; i < m; ++i)
	{
		cin>>a>>b;
		v[a].push_back(b);
		ind[b]++;
	}
	
	int count=0,u;
	queue <int> q;
	vector<int> v1;
	multiset<int> s;
	for ( i = 0; i < n; ++i)
	{
		if(ind[i]==0)s.insert(i);
	}
	while(!s.empty())
	{
		u=*s.begin();
		s.erase(s.begin());
		v1.push_back(u);
		for (int i:v[u])
			{
				ind[i]--;
				if(ind[i]==0)s.insert(i);
			}	
		count++;
	}
	for ( i = 0; i < v1.size(); ++i)
	{
		cout<<v1[i]<<" ";
	}
	return 0;
}