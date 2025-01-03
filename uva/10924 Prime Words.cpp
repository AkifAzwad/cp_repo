#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
bool status[1100002];
void siv(int N)
{

	int sq=sqrt(N);
	for(int i=4;i<=N;i+=2) status[i]=1;
	for(int i=3;i<=sq;i+=2){
		if(status[i]==0)
		{
			for(int j=i*i;j<=N;j+=i) status[j]=1;
		}
	}
	status[1]=0;

}
int main()
{
    int i,j;
    int ans;
    char s[25];
    siv(1070);
    while(gets(s)){
    for(ans=i=0;s[i]!='\0';i++)
    {
        if(s[i]>='a'&&s[i]<='z')
        {
        ans+=(s[i]-96);
        }
        else ans+=(s[i]-38);
    }
    if(status[ans]==0)
    {
       printf("It is a prime word.\n");
    }
    else
    {
        printf("It is not a prime word.\n");
    }
    }
  return 0;
}
