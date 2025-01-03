#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
int main()
{

	string a,b;
	
	while(cin>>a>>b){
	if(a=="0"||b=="0")
	{
		cout<<"0\n";
	}
	else{
	if(a.size()>b.size()){swap(a,b);}
	ll rem;
	ll i,j,k,l;
	j=a.size();k=b.size();
	ll c[j],d[k];
	vector <int> s1[250],s2;
	for ( i = 0; i < a.size(); ++i)
	{
		c[i]=a[i]-'0';
	}
	for ( i = 0; i < b.size(); ++i)
	{
		d[i]=b[i]-'0';
	}
	for ( i = a.size()-1,l = 0; i >= 0; --i,l++)
	{
			if(l!=0)
			{
				ll x;
				for(x=0;x<l;x++){s1[l].push_back(0);}
			}
		for ( j = b.size()-1,k = 0,rem=0; j >= 0; --j)
		{
			
			//s1[k++]=(c[i]*d[j]+rem)%10;
			s1[l].push_back((c[i]*d[j]+rem)%10);
			rem=(c[i]*d[j]+rem)/10;
		}
		while(rem)
		{
			//s1[k++]=rem%10;
			s1[l].push_back(rem%10);
			rem/=10;
		}
		
		if(l!=0)
		{
			ll hi,xtra=0,lo;
			vector <int> s2;
			hi=max(s1[l].size(),s1[l-1].size());
			//lo=min(s1[l].size(),s1[l-1].size());
			s1[l].resize(hi);s1[l-1].resize(hi);
			for ( k = 0; k < hi; ++k)
			{
				s2.push_back((s1[l-1][k]+s1[l][k]+xtra)%10);
				xtra=(s1[l-1][k]+s1[l][k]+xtra)/10;
			}
		
			while(xtra)
		{
			//s1[k++]=rem%10;
			s2.push_back(xtra%10);
			xtra/=10;
		}
		s1[l]=s2;
		
		}
		
		
	}
	//cout<<l<<endl;
	if(l==1)
	{
	for ( i = s1[0].size()-1; i >= 0; --i)
	{
		cout<<s1[0][i];
	}
		cout<<endl;
	}
	else{
	for ( i = s1[l-1].size()-1; i >= 0; --i)
	{
		cout<<s1[l-1][i];
	}
		cout<<endl;
	}

 }
}	
	return 0;
}