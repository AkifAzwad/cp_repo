#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
bool status[20000000];
   int pos[20000000];
void siv()
{
    int i,j,k;
	int N=20000000;
	int sq=sqrt(N);
	for( i=4;i<=N;i+=2) status[i]=1;
	for( i=3;i<=sq;i+=2){
		if(status[i]==0)
		{
			for( j=i*i;j<=N;j+=i) status[j]=1;
		}
	}
	status[1]=1;

}
int main()
{
    siv();
    int i,j,k,n;

    for( k=i=1;i<=20000000;i++)
    {
        if(status[i]==0&&status[i+2]==0)
        {
            pos[k++]=i;
        }
    }

    while(cin>>n){
    printf("(%d, %d)\n",pos[n],pos[n]+2);
    }
  return 0;
}
