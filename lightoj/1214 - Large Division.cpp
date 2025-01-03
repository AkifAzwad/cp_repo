#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
   int i,j,k=1;
   double a,c;
   int t,b;
   cin>>t;
   while(t--)
   {
       cin>>a>>b;

       c=a/b;
       printf("%d\n",c);
       printf("%d\n",b*c);
       /*if(a==(b*c)) printf("Case %d: divisible\n",k++);
       else printf("Case %d: not divisible\n",k++);*/
   }
  return 0;
}
