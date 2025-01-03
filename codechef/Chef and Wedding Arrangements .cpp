#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
int main()
{

	int i,j,k;
	int n,t;

	cin>>t;
	while(t--)
	{
		cin>>n>>k;
		int a[n];
		int c[101];
		for ( i = 0; i < n; ++i)
		{
			cin>>a[i];
			
		}
		
		int x=1,y=0,z;
		int ans=INT_MAX;
		int b[101];
		int r,q;
		int last=0;
		int element=0;
		for ( x = 1; x <= n; ++x)
		{
			y=0;j=1;
			memset(b,0,sizeof(b));
			
			int cnt=0;
			for (i = 0; i < n; ++i)
			{
				b[a[i]]++;
				//if(x==3)cout<<a[i]<<" "<<cnt<<" "<<y;
				if(b[a[i]]==2){
					//if(x==2)cout<<a[i]<<" ";
					if(cnt==0){last=i;}
					cnt++;y+=2;
					if(cnt==k&&j<x)
					{
						int k1=i;
						int check=0;
						int check1=0,check2=0;
						int l=0;
						int ind;
						memset(c,0,sizeof(c));
						while(a[k1]!=a[i]||i==k1&&k1>=0)
						{
							//if(x==2)cout<<a[k1]<<" ";
							c[a[k1]]++;
							if(c[a[k1]]==2){
								//if(x==2)cout<<a[k1]<<"  ";
								check1=1;
								break;
							}
							//if(x==2)cout<<b[a[k1]]<<" ";
							if(b[a[k1]]>=2){
								//if(x==2)cout<<a[k1]<<" ";
								check++;
								if(b[a[k1]]==2)l+=2;
								else l++;
								if(j==x-1){
									r=0;
									for (q = i+1; q < n; ++q)
									{
										if(a[q]==a[k1]){r=1;break;}
									}
								if(r)
								{
									if(b[a[k1]]==2)l-=2;
									else l--;
									ind=k1;
									check2=1;
									break;
								}
									}
								if(check==k)
								{
									break;
								}
							}
							k1--;
						}
						//if(x==2)cout<<" "<<check<<" ";
						if(check==k)
						{
							//found
							//if(x==2)cout<<" "<<k1;
							if(check2==0){
							cnt=0;
							j++;
							memset(b,0,sizeof(b));
							for ( int v = k1; v <= i; ++v)
							{
								b[a[v]]++;
							}
							y-=l;
						
							//else y+=2,cnt--;
							}
							else
							{
								cnt=0;
								j++;
								memset(b,0,sizeof(b));
								for ( int v = ind+1; v <= i; ++v)
								{
								b[a[v]]++;
								}
								y-=l;
						
								//else y+=2,cnt--;
							}
						}	
						else cnt--;
					}
					/*else if(i==n-1&&j==x-1)
					{
						y-=2;
					}*/
					
					//if(x==2)cout<<y<<" ";
				}
				else if(b[a[i]]>2){y++;
				/*if(i==n-1&&j==x-1)
					{
						y--;
					}*/
				}
				//if(x==2)cout<<y<<" ";
		   //if(x==4)cout<<j<<" "<<y<<endl;	
				//if(x==3)cout<<endl;
			}
			cout<<x<<" "<<j<<endl;
			if(cnt!=0&&x!=1&&j<x)
			{
				
				
				int num=0;
				int mx=0;
				
				memset(c,0,sizeof(c));
				//cout<<last<<endl;
				for (i = last; i < n; ++i)
				{
					c[a[i]]++;
					//cout<<a[i]<<" "<<c[a[i]]<<endl;
					if(b[a[i]]>1)
					{
						if(c[a[i]]==1){
							num++;
							if(mx<num)mx=num;
						}
						else if(c[a[i]]>1)
						{
							num--;
						}
					}
					
				}
				//cout<<endl;
				y-=mx;
			}

			z=(x*k)+y;
			//cout<<y<<" "<<z<<endl;
			ans=min(z,ans);
		}
       cout<<ans<<endl;
	}

	return 0;
}