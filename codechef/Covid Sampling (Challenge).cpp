#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
 int  v[65][65];
int b=0;
void fun(int r1,int c1,int r2,int c2)
{

	int m;
	if(r1==r2&&c1==c2)
	{
	    if(v[r1][c1]!=1&&v[r1][c1]!=-1){
	    cout<<"1 ";
		cout<<r1<<" "<<c1<<" "<<r2<<" "<<c2<<endl;
		cin>>m;
		if(m==1)v[r1][c1]=1;
	    else v[r1][c1]=-1;
	    }
		return;
	}
	//else if()
	else if((r2-r1+1)%2==0)
	{

		cout<<"1 ";
		cout<<r1<<" "<<c1<<" "<<r2<<" "<<c2<<endl;
		cin>>m;
		if(m!=0&&m!=-1){
		int x=(r2-r1+1)/2;
		int y=(c2-c1+1)/2;
		fun(r1,c1,r2-x,c2-y);
		fun(r1+x,c1,r2,c2-y);
		fun(r1,c1+y,r2-x,c2);
		fun(r1+x,c1+y,r2,c2);
		}
		else
		{
			return;
		}
	}
	else
	{
		cout<<"1 ";
		cout<<r1<<" "<<c1<<" "<<r2<<" "<<c2<<endl;
		cin>>m;
		if(m!=0&&m!=-1){
		int x1=(r2-r1+1)/2;
		//int x2=x1+1;//even
		int y1=(c2-c1+1)/2;
		//int y2=y1+1;//even
		fun(r1,c1,r2-x1,c2-y1);
		fun(r1+x1,c1,r2,c2-y1);
		fun(r1,c1+y1,r2-x1,c2);
		fun(r1+x1,c1+y1,r2,c2);
		}
		else
		{
			return;
		}
	}
}
int main()
{

	int i,j,k;
	int n,t,p;
	int x,y;
    cin>>t;
    while(t--){
    memset(v,0,sizeof(v));
	cin>>n>>p;
	fun(1,1,n,n);
	//v.push_back({0,0});
	//sort(v.begin(),v.end());
	cout<<"2\n";
	for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
           if(v[i][j]==1)
			{
				cout<<"1 ";
			}
			else cout<<"0 ";
        }
        cout<<endl;
    }
    cin>>k;
    if(k!=1)
    {
       break;
    }

}
	return 0;
}
