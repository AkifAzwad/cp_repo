#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,j;
    string s;
    string s1="DONE";
    string temp;
    while(1){
    getline(cin,s);

    if(!s.compare(s1))
    {
        break;
    }
    transform(s.begin(),s.end(),s.begin(),::tolower);
    for(j=0,i=0;i<s.size();i++)
    {
        if((s[i]>='a'&&s[i]<='z')||(s[i]>='A'&&s[i]<='Z'))
    {

       s[j]=s[i];
       j++;
    }
    }
    s=s.substr(0,j);

    temp=s;
    reverse(temp.begin(),temp.end());

    if(s.compare(temp)==0)
    {
        cout<<"You won't be eaten!\n";
    }
    else{
    cout<<"Uh oh.."<<"\n";
    }
    }
  return 0;
}
