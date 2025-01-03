#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);
struct data
{
    char ch[105];
    int n;
};
bool cmp(data a, data b)
{
    if(a.n>b.n)return 0;
    else return 1;

}
int main()
{
    int j=1,t;
    cin>>t;
    while(t--){
    int i,high;
    int ar[10];
    struct data A[10];
    for(i=0;i<10;i++){
    scanf("%s",A[i].ch);
    scanf("%d",&A[i].n);
    ar[i]=A[i].n;
    }
    sort(ar,ar+10);
    high=ar[9];
    printf("Case #%d:\n",j++);
   for(i=0;i<10;i++)
   {
       if(A[i].n==high){printf("%s\n",A[i].ch);}
   }
    }
      return 0;
}
