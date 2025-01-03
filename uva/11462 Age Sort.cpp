#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    int i,n;
    while(1){
    scanf("%d",&n);
    if(n==0)break;
    int a[n];
    for(i=0;i<n;i++)scanf("%d",&a[i]);
    sort(a,a+i);
    for(i=0;;i++){
            printf("%d",a[i]);
            if(i==n-1){break;}

        printf(" ");
    }
    printf("\n");

   } return 0;
}
