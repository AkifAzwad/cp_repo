#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
int main()
{
	int n;
	
	pair<int,int> p,q;
	cin>>n;
	while(n--){
	cin>>p.first>>p.second;
	cin>>q.first>>q.second;
	cout<<2*(q.first)-p.first<<" "<<2*(q.second)-p.second;
	cout<<endl;
	}
	return 0;
}