#include <bits/stdc++.h>
using namespace std;

struct PT
{
    using T = int;
    T x,y;
    PT(T x=0,T y=0): x(x),y(y){}
    bool operator < (const PT &p) const{
        return x<p.x;
    }
    PT operator + (const PT &p) const{
        return PT(x+p.x,y+p.y);
    }
    PT operator - (const PT &p) const{
        return PT(x-p.x,y-p.y);
    }
    PT operator * (const double  &c )const{
        return PT(x*c,y*c);
    }
    PT operator / (const double  &c )const{
        return PT(x/c,y/c);
    }
};
int dot(PT a,PT b){
    return a.x*b.x + a.y*b.y;
}
int cross(PT a,PT b){
    return a.x*b.y - a.y*b.x;
}

int main()
{
    PT a(2,4);
    printf("%d %d\n",a.x,a.y);
    PT b(3,5);
    printf("%d %d\n",b.x,b.y);
    PT c;
    printf("%d %d\n",c.x,c.y);
    c = a+b;
    printf("%d %d\n",c.x,c.y);
    printf("**************\n\n");

    int n;
    scanf("%d",&n);
    vector<PT> points(n);
    for (int i = 0;i<n;i++)cin>>points[i].x>>points[i].y;
        //scanf("%d%d",&points[i].x,&points[i].y);
    sort(points.begin(),points.end());
    for (int i = 0;i<n;i++)
        printf("%d %d\n",points[i].x,points[i].y);

    return 0;
}
