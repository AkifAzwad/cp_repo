#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
int main()
{

	int i,j,r;
	int t; 
	int n,k;
	int y1,y2,y3;
	int z,z1;
	cin>>t;
	while(t--){
	cin>>n>>k;
	int a[n+1];
	int b[n+1];
	
	std::vector<int> v1;
	
	
	for ( i = 1,r = 0; i <= n; ++i)
	{
		cin>>a[i];
		if(a[i]!=i){b[a[i]]=i;r++;}
		else b[a[i]]=-1;
	}
	
	if(r<3)
	{
		if(r==0)
		{
			cout<<"0\n";
		}
		else cout<<"-1\n";
	}
	else{
	int temp[4],temp1[4];
	z=z1=0;
	
	int x,x1,x2,x3;
	int w;
	
	for ( i = 1; i <= n; ++i)
	{
			x1=x2=x3=0;
			y1=b[i];
			if(y1==-1)
			{
				continue;
			}
			w=y2=i;
			w=a[w];
			y3=-1;
			for ( j = 1; j <= n; ++j)
			{
				if(j!=i&&j!=a[i]&&b[j]!=-1)
				{
					y3=b[j];
					//cout<<j<<" "<<y1<<" "<<y2<<" "<<y3<<endl;
					break;
				}
			}
			//cout<<"tr "<<y1<<" "<<y2<<" "<<y3<<endl;			
			//cout<<a[y1]<<" "<<a[y2]<<" "<<a[y3]<<endl;
		if(y3==-1)
		{
			if(a[y1]==y1&&a[y2]==y2){break;}
			else {z=1;break;}
		}
		for ( x = 1; x < 3; ++x)
		{
			temp[1]=y1;
			temp[2]=y2;
			temp[3]=y3;
			temp1[1]=a[y1];
			temp1[2]=a[y2];
			temp1[3]=a[y3];
			if(a[y1]!=y1&&a[y2]!=y2&&a[y3]!=y3)   
			{
			
			a[temp[1]]=temp1[3];
			a[temp[2]]=temp1[1];
			a[temp[3]]=temp1[2];
			v1.push_back(y1);v1.push_back(y2);
			v1.push_back(y3);
			y1=temp[3];y2=temp[1];y3=temp[2];

			b[temp1[3]]=temp[1];
			b[temp1[1]]=temp[2];
			b[temp1[2]]=temp[3];
			
			//cout<<y1<<" "<<y2<<" "<<y3<<endl;	
			//cout<<"bb "<<a[y1]<<" "<<a[y2]<<" "<<a[y3]<<endl;	
			z1++;
			}
			else break;	
		}
		//cout<<"fs "<<b[i]<<" "<<b[w]<<" "<<b[j]<<endl;
		
		if(a[y1]!=y1&&a[y2]!=y2&&a[y3]!=y3)
		{
			z=1;
			break;
		}
		
		else
		{
			if(a[y1]==y1){
				b[y1]=-1;
				x1=1;
				
			}
		    if(a[y2]==y2){
		    	b[y2]=-1;
		    	x2=1;
		    }
			if(a[y3]==y3){
				b[y3]=-1;
				x3=1;
				
			}
		}
		if(x1==0&&x2==0&&x3==0)
		{
			z=1;
			break;
		}
		//cout<<v[0]<<" "<<v[1]<<" "<<v[2]<<endl;
		//i++;
		
	}	
	//cout<<"fkajs\n";
	if(z==0&&z1<=k){
		cout<<z1<<endl;
	for ( i = 0; i < v1.size(); i+=3)
	{
		cout<<v1[i]<<" "<<v1[i+1]<<" "<<v1[i+2]<<endl;
	}
	
	}
	else
	{
		cout<<"-1\n";
	}
	}
	
}
	return 0;
}