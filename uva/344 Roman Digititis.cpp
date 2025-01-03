#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
int main()
{

	int j,k,n;
	int y,z;
	int i,v,x,l,c;

	while(1){
		cin>>n;
		if(n==0)break;
	i=v=x=l=c=0;
	for (j = 1,k=1; j <= n; ++j)
	{
		if(j%10!=5&&j%10!=0)
		{
			i+=(k++);
		}
		if(k==4||j%10==5||j%10==0)k=1;
		if(j%10>=4&&j%10<=8)
		{
			v++;
		}
		if(j%10==9)
		{
			x++;
		}
		if(j/10>=1&&j/10<4)
		{
			x+=(j/10);
		}
		if(j/10==4)
		{
			x+=1;
		}
		if(j/10>=6&&j/10<=8)
		{
			x+=((j/10)-5);
		}
		if(j/10>=4&&j/10<=8)
		{
			l++;
		}
		if(j/10==9)
		{
			x++;c++;
		}
		if(j==100)
		{
			l++;
		}
		
	}
	//99: 140 i, 50 v, 150 x, 50 l, 10 c
	printf("%d: %d i, %d v, %d x, %d l, %d c\n",n,i,v,x,l,c);
	
	}
	return 0;
}