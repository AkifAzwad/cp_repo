#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
string s[100000];
int x[100000][5];
int main()
{
    int i,j,k,n,count,t;

    string temp;
    cin>>t;
    while(t--){
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>s[i];
    }
    for(i=0;i<n;i++)
    {
        temp=s[i];
        for(j=0;j<temp.size();j++)
        {

                     if(temp[j]=='a'){x[i][0]=1;}
                else if(temp[j]=='e'){x[i][1]=1;}
                else if(temp[j]=='i'){x[i][2]=1;}
                else if(temp[j]=='o'){x[i][3]=1;}
                else if(temp[j]=='u'){x[i][4]=1;}

           }

    }
        for(count=i=0;i<n;i++)
       {
            for(j=i+1;j<n;j++)
        {
            if(x[i][0]||x[j][0]&&x[i][1]||x[j][1]&&x[i][2]||x[j][2]
                  &&x[i][3]||x[j][3]&&x[i][4]||x[j][4])count++;
        }

       }
    cout<<count<<"\n";

    }
  return 0;
}
