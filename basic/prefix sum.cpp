#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
int main()
{

	int i,j,k;
	int a[4][5]=  { { 1, 1, 1, 1, 1 }, 
                    { 1, 1, 1, 1, 1 }, 
                    { 1, 1, 1, 1, 1 }, 
                    { 1, 1, 1, 1, 1 } }; 
    int psa[4][5];
   	int sum=0;
   	for ( i = 0; i < 4; ++i)
    {
    	sum+=a[i][0];
    	psa[i][0]=sum;
    }
    sum=0;
    for ( i = 0; i < 5; ++i)
    {
    	sum+=a[0][i];
    	psa[0][i]=sum;
    }
    for ( i = 1; i < 4; ++i)
    {
    	for ( j = 1; j < 5; ++j)
    	{
    		psa[i][j]=psa[i-1][j]+psa[i][j-1]-psa[i-1][j-1]+a[i][j];
    	}
    }
    for ( i = 0; i < 4; ++i)
    {
    	for ( j = 0; j < 5; ++j)
    	{
    		cout<<psa[i][j]<<" ";
    	}
    	cout<<endl;
    }
	return 0;
}