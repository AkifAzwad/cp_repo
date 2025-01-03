#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    int i,j,n,m;
    int x,y,z,t,k=1;
    cin>>t;
    while(t--){
    string s;
    vector <int> v;
    cin>>n>>m;
    getchar();
    printf("Case %d:\n",k++);
    for(i=1,y=0;i<=m;i++)
    {
        cin>>s;

        if(s=="pushLeft")
        {
            cin>>x;
        if(y!=n)
         {
         cout<<"Pushed in left: "<<x<<endl;
         v.insert(v.begin(),x);
         y++;

         }
         else cout<<"The queue is full\n";
        }
        else if(s=="pushRight")
        {
            cin>>x;
         if(y!=n)
         {
         cout<<"Pushed in right: "<<x<<endl;
         v.push_back(x);
         y++;

         }
         else cout<<"The queue is full\n";
        }
        else if(s=="popLeft")
        {
            if(!v.empty()){
            cout<<"Popped from left: "<<v[0]<<endl;
            v.erase(v.begin());
            y--;
            }
            else cout<<"The queue is empty\n";
        }
        else
        {
            if(!v.empty()){
                    z=v.size();
            cout<<"Popped from right: "<<v[z-1]<<endl;
            v.pop_back();
            y--;
            }
            else cout<<"The queue is empty\n";
        }

    }

}
    return 0;
}
