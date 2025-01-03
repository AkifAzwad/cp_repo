#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    int i,n,l,x,y;
    while(cin>>n){
    l=0,x=0,y=0;
    if((n%4==0&&n%100!=0)||(n%400==0))
    {
        printf("This is leap year.\n");
        l=1;
    }
    if(n%15==0)
    {
        printf("This is huluculu festival year.\n");
        x=1;
    }
    if(n%55==0&&l==1)
    {
        printf("This is bulukulu festival year.\n");
        y=1;
    }

    if(x==0&&y==0&&l==0)
    {
        printf("This is an ordinary year.\n");
    }
printf("\n");
    }
  return 0;
}
