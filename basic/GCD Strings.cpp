#include<bits/stdc++.h>
using namespace std;

string fun(long long a,long long b)
{
	
	if(a%b==0)
	{
		string ch1="1";
		for(long long i=1;i<a;i++){ch1+="0";}
		return ch1;
	}
	string ch2,ch3;
	ch2=fun(b,a%b);
	while(ch2.size()<a)
	{
		ch2+=ch2;
	}
	ch3=ch2.substr(0,a);
	return ch3;
}
int main()
{

	int t;
	long long M=1000000007;
	cin>>t;
	while(t--){
	long long a,b,i,j,ans;
	string a1,a2;
	cin>>a>>b;
	a2=fun(a,b);
	reverse(a2.begin(),a2.end());
	
	for(ans=1,b=i=0;i<a2.size();i++)
	{
		
		if(a2[i]=='1')
		{
			for(j=0,ans=1;j<i;j++)
				{
					ans=(2*ans)%M;
					
				}
				b=(b+ans)%M;
			
		}
		
	}
		cout<<b<<endl;
	}
	return 0;
}