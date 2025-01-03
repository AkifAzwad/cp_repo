#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    int m,n;
    int i,j,carry,ans;
    while(1){
    cin>>m>>n;
    if(m==0&&n==0)
    {
        break;
    }
    for(carry=ans=0;m!=0||n!=0;)
    {

        i=m%10;
        j=n%10;
        if(i+j+carry>9)
        {
            carry=1;ans++;

        }
        else
        {
            carry=0;
        }

         m/=10;
         n/=10;

    }
    if(ans==1)printf("1 carry operation.\n");
    else if(ans>1)printf("%d carry operations.\n",ans);
    else printf("No carry operation.\n");
    }
  return 0;
}
