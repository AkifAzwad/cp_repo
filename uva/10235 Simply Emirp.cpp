#include<bits/stdc++.h>
using namespace std;
bool status[1100002];
void siv()
{
	int N=1000000;
	int sq=sqrt(N);
	for(int i=4;i<=N;i+=2) status[i]=1;
	for(int i=3;i<=sq;i+=2){
		if(status[i]==0)
		{
			for(int j=i*i;j<=N;j+=i) status[j]=1;
		}
	}
	status[1]=1;

}
int rev(int n)
{
    int r_num=0;
    while(n)
    {
        r_num=r_num*10+n%10;
        n=n/10;
    }
    return r_num;
}
int main()
{
    int n,m;
    siv();
    while(scanf("%d",&n)!=EOF)
        {
    m=rev(n);
    if(status[n]==1)
    {
        printf("%d is not prime.\n",n);
    }
    else if(m==n)
    {
        printf("%d is prime.\n",n);
    }
    else if(status[m]==0)
    {
        printf("%d is emirp.\n",n);
    }
    else
    {
        printf("%d is prime.\n",n);
    }
        }
  return 0;
}
