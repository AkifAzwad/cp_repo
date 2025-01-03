#include<stdio.h>
#include<string.h>

int main()
{
    int n,m,count,sum;
    int i,j,x,y;
    int k=1;
    while(1){
    scanf("%d%d",&n,&m);
    if(n==0&&m==0)break;
    if(k>1)printf("\n");
    getchar();
    char a[n+1][m+1];
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=m;j++)
        {
            scanf("%c",&a[i][j]);
        }
        getchar();
    }
    printf("Field #%d:\n",k++);
    for(i=1;i<=n;i++)
    {

        for(j=1;j<=m;j++)
        {
            if(a[i][j]=='*')
            {
              printf("*");
            }
                else{
                    for(x=i-1,y=j-1,sum=0,count=1;count<=9;count++,y++)
                    {

                    if(x!=i||y!=j)
                      {

                          if((x>0&&y>0)&&(x<=n&&y<=m))
                          {

                            if(a[x][y]=='*')
                            {
                                sum++;

                            }
                          }
                      }
                      if((count)%3==0&&y!=0)
                      {
                          y=j-2;
                          x++;

                      }

                  }
                  printf("%d",sum);
                }
        }
        printf("\n");
    }

}
  return 0;
}
