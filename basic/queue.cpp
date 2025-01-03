#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    int i,j;
    priority_queue <int> s;
    queue <int> x;
    cin>>i;
    while(i--)
    {
        cin>>j;
        s.push(j);
    }
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
  return 0;
}
