#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    int i,j,t,k=1;
    cin>>t;
    getchar();
    while(t--)
    {
    vector <string> f_w,b_w;
    string s,temp;
    temp="http://www.lightoj.com/";
    j=i=0;
    printf("Case %d:\n",k++);
    while(1){

    cin>>s;

    if(s=="VISIT")
    {
        b_w.push_back(temp);
        cin>>temp;
        i++;
        f_w.clear();j=0;
        cout<<temp<<endl;
    }
    else if(s=="BACK")
    {
        if(b_w.empty())cout<<"Ignored\n";
        else
        {
           f_w.push_back(temp);j++;
           temp=b_w[i-1];
           cout<<temp<<endl;
           b_w.pop_back();
           i--;
        }
    }
    else if(s=="FORWARD")
    {
         if(f_w.empty())cout<<"Ignored\n";
         else{
         b_w.push_back(temp);i++;
         temp=f_w[j-1];
         cout<<temp<<endl;
         f_w.pop_back();
         j--;
         }
    }
    else if(s=="QUIT")
    {
        break;
    }
}

    }

  return 0;
}
