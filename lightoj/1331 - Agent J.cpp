#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    int i,j,k=1,t;
    double x,y,z;
    double s1,s2,s3,s;
    double a,b,c;
    double a1,b1,c1;
    double r1,r2,r3;
    double A1,A2,A3,A;
    double B1,B2,B3;
    double n1,n2,n3;
    double ans;
    cin>>t;
    while(t--){
    cin>>r1>>r2>>r3;
    a=r1+r2;
    b=r2+r3;
    c=r1+r3;
    x=acos(((b*b)+(c*c)-(a*a))/(2*b*c));
    y=acos(((a*a)+(c*c)-(b*b))/(2*a*c));
    z=acos(((b*b)+(a*a)-(c*c))/(2*b*a));

    a1=2*r1*sin(y/2);
    b1=2*r3*sin(x/2);
    c1=2*r2*sin(z/2);

    s1=((2*r1)+a1)/2;
    s2=((2*r2)+c1)/2;
    s3=((2*r3)+b1)/2;
    s=(a1+b1+c1)/2;
    A1=sqrt(s1*(s1-r1)*(s1-r1)*(s1-a1));
    A2=sqrt(s2*(s2-r2)*(s2-r2)*(s2-c1));
    A3=sqrt(s3*(s3-r3)*(s3-r3)*(s3-b1));
    A=sqrt(s*(s-a1)*(s-b1)*(s-c1));
    n1=(2*PI)/y;//r1
    n2=(2*PI)/z;//r2
    n3=(2*PI)/x;//r3
    B1=(PI*r1*r1)/n1;
    B2=(PI*r2*r2)/n2;
    B3=(PI*r3*r3)/n3;
    B1-=A1;B2-=A2;B3-=A3;
    ans=A-B1-B2-B3;

    printf("Case %d: %lf\n",k++,ans);
    }
  return 0;
}
