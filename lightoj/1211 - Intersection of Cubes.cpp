#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    int i,j,p,n,ans,t,k=1;
    cin>>t;
    for(j=1;j<=t;j++)
    {
    cin>>n;
    int x1[n],y1[n],z1[n];
    int x2[n],y2[n],z2[n];
    int ag,al,bg,bl,cg,cl;
    p=0;
    for(i=0;i<n;i++)
    {
        cin>>x1[i]>>y1[i]>>z1[i];
        cin>>x2[i]>>y2[i]>>z2[i];
    }
    sort(x1,x1+n);
    sort(y1,y1+n);
    sort(z1,z1+n);
    sort(x2,x2+n);
    sort(y2,y2+n);
    sort(z2,z2+n);
    ag=x1[n-1];
    al=x2[0];
    bg=y1[n-1];
    bl=y2[0];
    cg=z1[n-1];
    cl=z2[0];
    if(ag<al)
    {
      if(bg<bl)
    {
      if(cg<cl)
    {

        ans=abs(ag-al)*abs(bg-bl)*abs(cg-cl);
        printf("Case %d: %d\n",k++,ans);
        p=1;
    }
    }
    }
     if(p==0)
    {
        printf("Case %d: 0\n",k++);
    }

}
      return 0;
}
