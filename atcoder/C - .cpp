#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    int i,j,k;
    int x,y;
    int n,N=100001;
    int count;
    cin>>n;
    int a[n+1];
    int b[N];
    int c[N];
    memset(b,0,N*sizeof(b[0]));
    memset(c,0,N*sizeof(c[0]));
    map <int,int> mymap1,mymap2;
    map <int,int> :: iterator it;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
        if(i%2==0)mymap2[a[i]]++;
        else mymap1[a[i]]++;
    }

   /*for(i=1;i<=n;i++)
   {
       if(i%2==0)cout<<b[a[i]]<<endl;
       else  cout<<c[a[i]]<<endl;
   }*/
    int max,temp;
    for(max=0,i=1;i<=n;i+=2)
    {
        temp=mymap1[a[i]];
        if(temp>max)x=a[i];
    }
    for(max=0,i=2;i<=n;i+=2)
    {
        temp=mymap2[a[i]];
        if(temp>max)y=a[i];
    }
    /*for(it=mymap1.begin();it!=mymap1.end();++it)
    {
       x=it->first;
    }
    for(it=mymap2.begin();it!=mymap2.end();++it)
    {
       y=it->first;
    }*/
    cout<<x<<" "<<y<<endl;
    count=0;
    if(x==y){y++;}
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            if(a[i]!=x)count++;
        }
        else
        {
            if(a[i]!=y)count++;
        }
    }
    cout<<count<<endl;

  return 0;
}
