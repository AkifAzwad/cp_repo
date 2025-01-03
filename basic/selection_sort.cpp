#include<bits/stdc++.h>
using namespace std;
int mine(int a[],int i,int n)
{
	int j=0,temp;
	temp=a[i];
	for(;i<=n;i++)
	{
		if(a[i]<temp)
		{
			temp=a[i];j=i;
		}
	}
	return j;
}
//si start index
//ei end index
void fun(int a[],int si,int ei)
{
	if(si>=ei)
	{
		return ;
	}
	int mi;
	//mi min index
	mi=mine(a,si,ei);
	swap(a[si],a[mi]);
	fun(a,si+1,ei);
}
int main()
{
	int n;
	int a[]={5,6,9,4,7};
	
	fun(a,0,4);
	for(int i=0;i<5;i++)cout<<a[i]<<" ";
	return 0;
}