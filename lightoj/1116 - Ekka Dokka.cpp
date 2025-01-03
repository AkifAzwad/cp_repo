#include<bits/stdc++.h>
using namespace std;

const double PI = acos(-1.0);

int main()
{
    int w, t, n, m, temp;
    int i, j, k = 1;

    cin >> t;
    while (t--) {
        cin >> w;
        if (w % 2 == 0)
        {
            for (temp = w, n = m = 1, i = 2; i * i <= w; i++)
            {
                if (temp % 2 == 0)
                {
                    temp = temp / 2;
                    m = 2 * m;
                }
                if (temp % 2 != 0) {n = temp; break;}

            }

            if (n != 1)printf("Case %d: %d %d\n", k++, n, m);
            else printf("Case %d: Impossible\n", k++);
        }
        else
        {
            printf("Case %d: Impossible\n", k++);
        }
    }
    return 0;
}
