#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    int i,x,y,m,h;
    int t;
    int ans;
    cin>>t;
    while(t--){
    scanf("%d:%d",&h,&m);

   if(h==12&&m==0)
   {
       printf("12:00\n");
   }
   else{
   ans=(h*60)+m;
    if(ans>720){
            m=60-m;
         if(m<10)
   printf("11:0%d\n",m);
   else
    printf("11:%d\n",m);
   }
   else{
        ans=720-ans;
        if(ans<60)
            {
                x=12;y=60-m;
        }
   else{
   x=ans/60;

   y=ans%(x*60);
   }

   if(x<10||y<10){
        if(x<10&&y<10)
        printf("0%d:0%d\n",x,y);
   else if(x<10)
   {
        printf("0%d:%d\n",x,y);
   }
   else if(y<10)
   {
        printf("%d:0%d\n",x,y);
   }
   }
   else cout<<x<<":"<<y<<"\n";
   }
   }
    }
  return 0;
}
