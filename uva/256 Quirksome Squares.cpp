#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
int sod(int n,int i)
{
	if(i==2){
	int temp1,temp2,j,k;
	temp1=0;
	for(j=0,k=1;k<=(i/2);k++)
	{
		if(j==0){temp1+=(n%10);}
		else{temp1+=((n%10)*j);}
		n/=10;
		if(j==0){j=1;}
		j*=10;
	}
	temp2=0;
	for(j=0,k=1;k<=(i/2);k++)
	{
		if(j==0){temp2+=(n%10);}
		else{temp2+=((n%10)*j);}
		n/=10;
		if(j==0){j=1;}
		j*=10;
	}
	//cout<<temp1<<" "<<temp2<<endl;
	return temp1+temp2;
	}
	if(i==4){
	int temp1,temp2,j,k;
	temp1=0;
	for(j=0,k=1;k<=(i/2);k++)
	{
		if(j==0){temp1+=(n%10);}
		else{temp1+=((n%10)*j);}
		n/=10;
		if(j==0){j=1;}
		j*=10;
	}
	temp2=0;
	for(j=0,k=1;k<=(i/2);k++)
	{
		if(j==0){temp2+=(n%10);}
		else{temp2+=((n%10)*j);}
		n/=10;
		if(j==0){j=1;}
		j*=10;
	}
	//cout<<temp1<<" "<<temp2<<endl;
	return temp1+temp2;
	}
	if(i==6){
	int temp1,temp2,j,k;
	temp1=0;
	for(j=0,k=1;k<=(i/2);k++)
	{
		if(j==0){temp1+=(n%10);}
		else{temp1+=((n%10)*j);}
		n/=10;
		if(j==0){j=1;}
		j*=10;
	}
	temp2=0;
	for(j=0,k=1;k<=(i/2);k++)
	{
		if(j==0){temp2+=(n%10);}
		else{temp2+=((n%10)*j);}
		n/=10;
		if(j==0){j=1;}
		j*=10;
	}
	//cout<<temp1<<" "<<temp2<<endl;
	return temp1+temp2;
	}
	if(i==8){
	int temp1,temp2,j,k;
	temp1=0;
	for(j=0,k=1;k<=(i/2);k++)
	{
		if(j==0){temp1+=(n%10);}
		else{temp1+=((n%10)*j);}
		n/=10;
		if(j==0){j=1;}
		j*=10;
	}
	temp2=0;
	for(j=0,k=1;k<=(i/2);k++)
	{
		if(j==0){temp2+=(n%10);}
		else{temp2+=((n%10)*j);}
		n/=10;
		if(j==0){j=1;}
		j*=10;
	}
	//cout<<temp1<<" "<<temp2<<endl;
	return temp1+temp2;
	}
}

int main()
{

	int i,n,x,j,k;
	while(cin>>n)
	{
	if(n==2)
	{
			cout<<"00"<<endl;
			cout<<"01"<<endl;
		for ( i = 4; i <= 9; i++)
		{

			 x=sod(i*i,2);
			if(x*x==i*i)
			{
				cout<<i*i<<endl;	
			}
		}
	}
	else if(n==4)
	{
			cout<<"0000"<<endl;
			cout<<"0001"<<endl;
		for ( i = 32; i <= 99; i++)
		{

			 x=sod(i*i,4);
			//cout<<x<<endl;
			if(x*x==i*i)
			{
				cout<<i*i<<endl;	
			}
		}
	}
	else if(n==6)
	{
			cout<<"000000"<<endl;
			cout<<"000001"<<endl;
		for ( i = 200; i <= 999; i++)
		{

			 x=sod(i*i,6);

			if(x*x==i*i)
			{
				k=6-log10(x*x);
				for ( j = 0; j < k; j++)
				{
					cout<<"0";
				}
				cout<<i*i<<endl;	
			}
		}
	}
	else
	{
			cout<<"00000000"<<endl;
			cout<<"00000001"<<endl;
		for ( i = 2000; i <= 9999; i++)
		{

			 x=sod(i*i,8);
			if(x*x==i*i)
			{
				k=8-log10(x*x);
				for ( j = 0; j < k; j++)
				{
					cout<<"0";
				}
				cout<<i*i<<endl;	
			}
		}
	}
	}
	return 0;
}