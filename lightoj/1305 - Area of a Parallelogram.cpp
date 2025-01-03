#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    int  a1,a2,b1,b2,c1,c2,d1,d2;
    int  h,x,y,temp;
    int ans,a,b,c;
    int k=1,t;
    cin>>t;
    while(t--){
    cin>>a1>>a2>>b1>>b2>>c1>>c2;
    x=(a1+c1);
    y=(a2+c2);
    d1=(x)-b1;
    d2=(y)-b2;

    a=a2-b2;
    b=b1-a1;
    c=(a2*(a1-b1))-(a1*(a2-b2));
    h=fabs(a*c1+b*c2+c);
    /*temp=sqrt(a*a+b*b);

    if((temp*temp)<(a*a+b*b))
    {
        temp++;
    }
    h=h/temp;
    temp=sqrt((a1-b1)*(a1-b1)+(a2-b2)*(a2-b2));
    /*if((temp*temp)<((a1-b1)*(a1-b1)+(a2-b2)*(a2-b2)))
    {
        temp++;
    }*/
    //ans=temp;
    //cout<<h<<" "<<ans;
    //cout<<a<<" "<<b<<" "<<c;

    printf("Case %d: %d %d %d\n",k++,d1,d2,h);
    }
  return 0;
}
