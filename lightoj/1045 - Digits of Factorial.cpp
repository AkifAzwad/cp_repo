#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    int a[10]={9,9,9,9};
    int b[50];
    int i,j,k,x,y,carry,prod,siz;

    x=99;
    int len=3;

    for(carry=siz=i=0;;i++)
    {
        prod=(a[i]*x)+carry;
        b[i]=prod%10;
        carry=prod/10;
        siz++;
        cout<<carry<<endl;
        if(i>=len-1&&carry==0)
        {
            break;
        }
    }


for(k=siz-1;k>-1;k--)
        {
            cout<<b[k];
        }
        cout<<"\n";


  return 0;
}
