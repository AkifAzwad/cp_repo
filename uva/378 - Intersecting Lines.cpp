#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
int main()
{
	
	int n;
	double a,b;
	double x1,x2,x3,x4,y1,y2,y3,y4;
	cin>>n;
	printf("INTERSECTING LINES OUTPUT\n");
	while(n--){

	cin>>x1>>y1>>x2>>y2>>x3>>y3>>x4>>y4;
	double e1,f1,g1,e2,f2,g2;
		 e1=y2-y1;
		 f1=x1-x2;
		 g1=x1*(e1)+y1*(f1);
		 e2=y4-y3;
		 f2=x3-x4;
		 g2=x3*(e2)+y3*(f2);
		
	a=((e1*f2)-(e2*f1));
	
	
	if(a!=0)
	{
		 //cout<<e1<<" "<<f1<<" "<<g1<<endl;
		 //cout<<e2<<" "<<f2<<" "<<g2<<endl;
		 double x,y;
		 x=((f2*g1)-(f1*g2))/a;
		 y=((g2*e1)-(g1*e2))/a;
		 
		 if(x==-0.0)
		 {
		 	x=abs(x);
		 }
		 if(y==-0.0)
		 {
		 	y=abs(y);
		 }
		 
		 printf("POINT %0.2f %0.2f\n",x,y);
	}
	else if(a==0)
	{
		b=x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2);
		if(b==0){printf("LINE\n");}
		else printf("NONE\n");
	
	}
	
	
	
	}
	printf("END OF OUTPUT\n");
	return 0;
}