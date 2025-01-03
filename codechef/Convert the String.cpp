#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
int main()
{

	ll t;
	ll i,j,k;
	ll n,m;
	char ch,ch1;

	cin>>t;
	while(t--){
	cin>>n;
	string a,b;
	cin>>a>>b;
	ll c[26]={0},d[26]={0};
	
	ll x,y;
	ch='a';
	x=-1;y=0;
	for ( i = 0; i < n; ++i)
	{
		j=a[i]-ch;k=b[i]-ch;
		if(a[i]<b[i]){
			y=1;
			break;
		}
		c[j]++;d[k]++;
		
		
	}

	
	for ( i = 0,j = 0; i < 26; ++i)
	{
		if(d[i]!=0)
		{
			if(c[i]==0)
			{
				j=1;
				break;
			}
		}
		
	}
	
	if(j==0&&y==0){

    std::vector<int> v,v1[30];
    ll p,l;
    for ( i = 25,x=0; i > -1; --i)
    {
    	
    	 ch='a';

    	for ( j = 0,k = 0,p = 0; j < n; ++j)
	    {
			if(a[j]==i+ch&&k==0){m=j;k=1;}
			if(a[j]!=b[j]&&b[j]==ch+i){
				
				p=1;v1[x].push_back(j);
			}
	    }
	    
		if(k==1&&p==1){
			k=0;p=0;
			v1[x].push_back(m);
			x++;	
		}	   

    }
   
    cout<<x<<endl;
    for ( i = 0; i < x; ++i)
    {
    	if(v1[i].size()!=0){cout<<v1[i].size()<<" ";
    	for ( j = 0; j < v1[i].size(); ++j)
    	{
    		cout<<v1[i][j]<<" ";
    	}
    	cout<<endl;
   		 }
    }
	
		}
		else
		{
			cout<<"-1\n";
		}
	
}
	return 0;
}