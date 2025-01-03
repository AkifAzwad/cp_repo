#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
int main()
{
    int t;
    double l,w,r;
    double red,gre;
    cin>>t;
    while(t--)
    {
        cin>>l;
        w=(3*l)/5;
        r=(l/5);
        red=PI*(r*r);
        gre=(l*w)-red;
        printf("%0.2lf %0.2lf\n",red,gre);
    }
  return 0;
}
