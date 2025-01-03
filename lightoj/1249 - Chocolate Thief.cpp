#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    int i,j,k=1;
    int n,t;
    int a,b,c;
    int max,min;
    int max_ind,min_ind;
    int x,y,z;
    cin>>t;
    while(t--){
    cin>>n;
    char s[n][25];
    int  v[n];
    for(max=i=0,min=9999999;i<n;i++){
    scanf("%s",s[i]);
    cin>>a>>b>>c;
    x=a*b*c;
    if(x>max){max=x;max_ind=i;}
    if(x<min){min=x;min_ind=i;}

    }
    if(max!=min){printf("Case %d: %s took chocolate from %s\n",k++,s[max_ind],s[min_ind]);}
    else{printf("Case %d: no thief\n",k++);}
}
  return 0;
}
