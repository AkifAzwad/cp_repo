#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
string s[10],x="IEHOVA#";
void dfs(int i,int j,int k,int m, int n)
{

	if(i>=0&&j>=0&&i<m&&j<n){
	if(s[i-1][j]==x[k])
	{
		cout<<"forth";
		if(k<6){cout<<" ";}
		k++;
		if((i-2)>=0){
			i-=2;
			dfs(i-2,j,k,m,n);
		}
		cout<<i<<" "<<j<<" "<<k<<endl;
	}
	//cout<<i<<" "<<j<<" "<<k<<endl;
	
	else if(s[i][j-1]==x[k])
	{
		cout<<"left";
		if(k<6){cout<<" ";}
		k++;
		if((j-2)>=0){
			j-=2;
			dfs(i,j,k,m,n);
		}
		
	}
	else if(s[i][j+1]==x[k])
	{
		cout<<"right";
		if(k<6){cout<<" ";}
		k++;
		if((j+2)<n){
			j+=2;
			dfs(i,j,k,m,n);
		}
		
	}
		//cout<<i<<" "<<j<<endl;
	}
	else return;
}
int main()
{

	int i,j,k;
	int m,n;
	int t;
	//cin>>t;
	
	cin>>m>>n;
	
	for ( i = 0; i < m; ++i)
	{
		cin>>s[i];
	}
		for ( j = 0; j < n; ++j)
		{
			if(s[m-1][j]=='@')
			{

				dfs(m-1,j,0,m,n);
				
				break;
			}
		}
			
		//cout<<"\n";
		
	

	return 0;
}