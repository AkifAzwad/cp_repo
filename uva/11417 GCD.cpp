#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
int gcd(int a,int b)
{
    int n;
    if(b%a==0)
    {
        return a;
    }
       return  gcd(b%a,a);
}
int main()
{
    int i,j;
    int G,N;
 while(1){
    cin>>N;
  if(N==0)
  {
      break;
  }
    G=0;
for(i=1;i<N;i++){
for(j=i+1;j<=N;j++)
{
G+=gcd(i,j);
}
}
    cout<<G<<"\n";
 }
  return 0;
}
