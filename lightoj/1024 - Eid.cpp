#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
#define max 4005
int arr_size;
int a_size;
int b_size;
int arr[max];
int a[max];
int b[max];
void div(ll n)
{
	ll i,j,rem=0,x=0;
	arr_size=0;
	memset(arr,0,sizeof(arr));
	for ( i = a_size-1; i >= 0; i--)
	{
		rem=(a[i])+rem*10;
		
		if(rem/n!=0)
			{
				x=1;
			}
			if(x==1){
				j=rem/n;
				
				if(j==0)
				{
					b[arr_size++]=0;
				}
			for (; j!=0; )
				{
					b[arr_size++]=j%10;
					
					j/=10;

				}
			}		
			rem%=n;
	
	//cout<<arr_size<<endl;
	}
	if(x==0)b[arr_size++]=0;

	for (j=0,i = arr_size-1; i >= 0; i--)
	{
		arr[j++]=b[i];
	}
}
void mult(ll x)
{
	ll prod,carry=0,i;
	for(i=0;i<a_size;i++)
	{
		prod=(a[i]*x)+carry;
		a[i]=prod%10;
		carry=prod/10;
	}
	while(carry)
	{
		a[a_size++]=carry%10;
		carry/=10;
	}
}
ll mod(ll n)
{
	ll i,rem=0;
		for ( i = b_size-1; i >= 0 ; i--)
	
	{
		rem=(b[i])+rem;
		if(rem%n==0)
		{
			rem=0;
		}
		else
		{
			rem%=n;
			rem*=10;
		}
		
	}
		return rem/10;
}
ll hcf(ll y1)
{
	
	ll x1=mod(y1);
	//cout<<x1<<endl;
	if(x1==0)return y1 ;
	else return __gcd(y1,x1);
}
void lcm(ll n)
{
	ll i,z;
	for (b_size=a_size = i = 0; i < arr_size; ++i)
	{
		b[i]=a[i]=arr[i];
		a_size++;b_size++;
	}
	
	mult(n);
	z=hcf(n);
	//cout<<" "<<z<<" ";
	div(z);
	
}
int main()
{
	ll i,j,n,t,k=1;
	ll x,y,z;
	cin>>t;
	while(t--){

	cin>>n;
	int in[n];
	memset(arr,0,sizeof(arr));
	arr_size=0;
	for (i = 0; i < n; ++i)
	{
		cin>>in[i];
	}
	x=(in[0]*in[1]);
	y=__gcd(in[0],in[1]);
	z=x/y;
	for (; z!=0; )
	{
		
		arr[arr_size++]=(z%10);
		z/=10;
	
	}

		//mult(in[2]);

		//div(in[2]);
	for (i = 2; i < n; ++i)
	{
		lcm(in[i]);
	}
	printf("Case %d: ",k++ );
	for (i = arr_size-1; i >= 0; i--)
	{
		cout<<arr[i];
	}
	cout<<endl;

}
	return 0;
}