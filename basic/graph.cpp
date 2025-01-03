#include<bits/stdc++.h>
using namespace std;

const double PI=acos(-1.0);

int main()
{
    int i,j,k;
    int node,edge,cost;
    int matrix[100][100];
    cin>>node>>edge;
    for(i=1;i<=edge;i++)
    {
        cin>>j>>k>>cost;
        //for(;;){
        matrix[j][k]=cost;
        matrix[k][j]=cost;

    }
    printf("  ");
    for(i=1;i<=node;i++)cout<<i<<" ";
    cout<<endl;
    for(i=1;i<=edge;i++)
    {
        cout<<i<<" ";

        for(k=1;k<=node;k++)cout<<matrix[i][k]<<" ";
        cout<<endl;

    }
  return 0;
}
