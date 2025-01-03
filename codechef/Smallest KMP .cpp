#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
int main()
{

	int i,j,k;
	int n,t;
	/*string r1,r2;
	r1="eillllhlz";
	r2="eilhllllz";
	if(r1<r2)cout<<"yes\n";
	else cout<<"no\n";
	*/
	cin>>t;
	while(t--)	
	{
		string s,p;
		cin>>s>>p;
		if(s==p)cout<<s<<endl;
		else{
		string s1,p1,s2;
		p1=p;
		sort(s.begin(),s.end());
		sort(p1.begin(),p1.end());
		
		j=0;
		for (i = 0; i < s.size(); ++i)
		{
			if(s[i]!=p1[j])
			{
				s1+=s[i];
			}
			else if(j<p1.size())j++;
		}
		sort(s1.begin(),s1.end());
		//cout<<s<<endl;
		//cout<<s1<<endl;
		
		k=0,j=0;
		int check;
		check=1;
			 int x;
			for ( x = 0; x < p.size(); ++x)
				{
					if(p[x]!=p[0])
					{
						if(p[x]<p[0])
						{
							check=1;
						}
						else check=2;

						break;
					}
				}
		if(s1[s1.size()-1]==p[0])
		{
			j=1;
		}

		if(j)
		{	
			for ( i = 0; i < s1.size(); ++i)
			{
			if(p[0]==s1[i]&&k==0)
			{
				if(check==1){
					s2+=p;
				}
				s2+=s1[i];
				//else s2+=p;s2+=s1[i];
				k=1;
			}
			else s2+=s1[i];
			}
			if(check==2)s2+=p;
		}
		else{
		for ( i = 0; i < s1.size(); ++i)
		{
			if(p[0]<=s1[i]&&k==0)
			{

				if(p[0]==s1[i]){
					if(check==1){s2+=p;s2+=s1[i];k=1;}
					else {s2+=s1[i];}
					//cout<<s[i]<<endl;
				}
				else {s2+=p;s2+=s1[i];k=1;}
				

			}
			else s2+=s1[i];
		}
		if(k==0){
			s2+=p;
		}
			}
		cout<<s2<<endl;
		}
	}

	return 0;
}
//aabadawyehhorst