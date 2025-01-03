#include<bits/stdc++.h>
using namespace std;

const double PI = acos(-1.0);

int main()
{
    int t, k = 1;
    long long i, j, x, y, z, ans, a, b, c, d;
    long long day1, year1, day2, year2;
    string month1, month2;
    char ch;
    cin >> t;
    while (t--) {
        cin >> month1 >> day1 >> ch >> year1;
        getchar();
        cin >> month2 >> day2 >> ch >> year2;
        y = 0; z = 0;
        if (month1 != "January" && month1 != "February")
        {
            y = -1; year1++;

        }

        if (month2 == "January" || (month2 == "February" && day2 < 29))
        {
            z = -1; year2--;

        }

        if (year1 == year2)
        {
            if ((year1 % 4 == 0 && year1 % 100 != 0) || (year1 % 400 == 0))
            {
                y += z;
                if (y < 0)printf("Case %d: 0\n", k++);
                else printf("Case %d: 1\n", k++);
            }

            else printf("Case %d: 0\n", k++);
        }
        else {
            i = (year1 - 1) / 4;
            j = (year2) / 4;
            a = (year1 - 1) / 100;
            b = (year1 - 1) / 400;
            c = (year2) / 100;
            d = (year2) / 400;


            ans = (j - c + d) - (i - a + b);
            if (ans < 0)ans = 0;
            printf("Case %d: %lld\n", k++, ans);
        }
    }
    return 0;
}
