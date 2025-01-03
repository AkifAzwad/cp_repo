#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
int fun(char ch)
{
	if(ch=='^')return 1;
	else if(ch=='/'||ch=='*')return 2;
	else if(ch=='+'||ch=='-')return 3;
}
int main()
{

	int t,n;
	int i,j,k;
	int a,b;
	
	cin>>t;
	while(t--){
	cin>>n;
	string s;
	cin>>s;

	char ch,temp;
	stack<char> x,y;
	std::vector<char> v;
	char rst[]={'^','/','*','+','-'};
	
	for ( i = 0; i < s.size(); ++i)
	{
		if(s[i]>='A'&&s[i]<='Z'){
		ch=s[i];
		v.push_back(ch);
		
		}
		
		else if(s[i]==')'){
			
			while(!x.empty())
			{
				if(x.top()=='('){x.pop();break;}
				ch=x.top();
				
				v.push_back(ch);
				x.pop();	
			}
			
		}
		
		else
		{
			/*while(!x.empty())
			{
				ch=x.top();
				y.push(ch);
				cout<<y.top()<<" ";
				x.pop();
			}
			cout<<endl;
			while(!y.empty())
			{
				ch=y.top();
				x.push(ch);
				y.pop();
			}*/
			if(!x.empty()){
				
				if(s[i]!='(')
				{
					
					while(!x.empty()){
					if(x.top()=='(')break;
					ch=x.top();
					//for ( j = 0; j < 5; ++j)
					{
						a=fun(s[i]);b=fun(ch);
					}	
					
					if(b<=a){v.push_back(ch);x.pop();}
					else if(b>a)break;
					}
				}

				}

				ch=s[i];
				x.push(ch);

				
		}
	

	}
	while(!x.empty())
	{

		ch=x.top();
		v.push_back(ch);
		x.pop();
	}
	
	for (i = 0; i < v.size(); ++i)
	{
		cout<<v[i];
	}
	cout<<endl;
}
	return 0;
}
