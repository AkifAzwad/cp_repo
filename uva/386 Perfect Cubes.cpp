#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
int main()
{

	int i,j,k;
	int n;
	int x,y;
	
	for ( n = 6; n <= 200; ++n)
	{
		int a[210]={0};
		for ( i = 2; i <=n ; ++i)
		{
			for ( j = 3; j <= n; ++j)
			{
				for ( k = 4; k <= n; ++k)
				{
					if(n*n*n==(i*i*i)+(j*j*j)+(k*k*k))
					{
						a[i]++;
						a[j]++;
						a[k]++;
						//Cube = 6, Triple = (3,4,5)
						if(a[i]<2||a[j]<2||a[k]<2)
						{printf("Cube = %d, Triple = (%d,%d,%d)\n",n,i,j,k);}
						
					}
					
				}
				
			}
			
		}
	}
	return 0;
}