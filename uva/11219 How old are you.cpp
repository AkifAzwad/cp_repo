#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i,t;
    int d_1,d_2;
    int m_1,m_2;
    int y_1,y_2;
    int ans;

    scanf("%d",&t);
    i=t;
    for(i=1;i<=t;i++)
        {
    scanf("%d/%d/%d",&d_1,&m_1,&y_1);
    scanf("%d/%d/%d",&d_2,&m_2,&y_2);

        if(y_1>=y_2)
        {
            ans=y_1-y_2;
            if(m_1-m_2>=0)
            {
                if(m_1==m_2)
                {
                    if(d_1-d_2<0)
                    ans--;
                }
            }
            else
            {
                ans--;
            }
            if(ans<0)
            {
                printf("Case #%d: Invalid birth date\n",i);
            }
            else if(ans>130)
                {
                printf("Case #%d: Check birth date\n",i);
                }
                else
                printf("Case #%d: %d\n",i,ans);
        }
        else
        {
            printf("Case #%d: Invalid birth date\n",i);
        }

    }

  return 0;
}
