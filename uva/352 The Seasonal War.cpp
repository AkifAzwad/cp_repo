#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
int a[26][26];
void dir(int x,int y)
{
	int i,j,k;
	if(a[x][y]=1)a[x][y]=-1;
	for ( i = -1; i < 2; ++i)
	{
		for ( j = -1; j < 2; ++j)
		{
			if((x+i)!=-1&&(x+i)!=27&&(y+j)!=-1&&(y+j)!=27){
			if(a[x+i][y+j]==-1){continue;}
			else if(a[x+i][y+j]==1){
				dir(x+i,y+j);
			}
			}
		}
	}
}
int dfs(int i,int j)
{
	if(a[i][j]==1)
	{	
		dir(i,j);
		
		return 1;
	}
 	else return 0;
}
int main()
{
	int i,j,k;
	int n;
	int l=1;
	while(cin>>n){
	string s[n];
	for ( i = 0; i < n; ++i)
	{
			cin>>s[i];
	}
	for ( i = 0; i < n; ++i)
	{
		for ( j = 0; j < n; ++j)
		{
			a[i][j]=s[i][j]-'0';
			
		}
	}
	for ( i = 0,k = 0; i < n; ++i)
	{
		for ( j = 0; j < n; ++j)
		{
			if(dfs(i,j)==1)k++;
		}

	}
	printf("Image number %d contains %d war eagles.\n",l++,k);
	memset(a,0,sizeof(a));
}
	return 0;
}