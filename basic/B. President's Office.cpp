#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
#define ll long long
int main()
{
    int n,m,r,c;
    char ch,ch1;
    cin>>n>>m>>ch;
    getchar();
    char a[n+1][m+1];
    int i,j,k,x,y;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++){cin>>a[i][j];}
        getchar();
    }
    for(r=c=x=y=0,i=1;i<=n;i++)
    {
        if(c==0){
        for(j=1;j<=m;j++)
        {
            if(a[i][j]==ch&&c==0)
            {
                x=i;
                y=j;
            }
          if(a[i][j]==ch)
          {
             c++;
          }
        }
        }

        if(a[i][y]==ch){r++;}
    }


    int ans1,ans2,ans3,ans4;
        ch1=a[x-1][y];
        for(ans1=1,j=y;j<=c;j++)
        {
            if(a[x-1][j]!=ch1)
            {
                ans1++;
                ch1=a[x-1][j];
            }
        }
        ch1=a[x][y-1];
        for(ans3=1,i=x;i<=r;i++)
        {
            if(a[i][y-1]!=ch1)
            {
                ans3++;
                ch1=a[i][y-1];
            }
        }
        ch1=a[r+1][y];
        for(ans2=1,j=y;j<=c;j++)
        {
            if(a[r+1][j]!=ch1)
            {
                ans2++;
                ch1=a[r+1][j];
            }
        }
        ch1=a[x][c+1];
        for(ans4=1,i=x;i<=r;i++)
        {
            if(a[i][c+1]!=ch1)
            {
                ans4++;
                ch1=a[i][r+1];
            }
        }
        cout<<ans1+ans2+ans3+ans4;
    /*for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++){cout<<a[i][j];}
        cout<<endl;
    }*/
  return 0;
}
