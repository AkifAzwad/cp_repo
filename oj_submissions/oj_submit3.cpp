#include "bits/stdc++.h"
using namespace std;

using ll = long long;


int main()
{

    ios_base::sync_with_stdio(0);
    cin.tie(0);

    //freopen("icecream.in", "r", stdin);

    int t; cin >> t;
    while (t--) {
        int x, y, k; cin >> x >> y >> k;
        if ((x + k) / y >= 1) {
            int times = x / y;
            if (times * y < x)times++;
            int add = times * y - x;
            if (add > k or add == 0)add = k;
            x += add;
            while (x % y == 0)x /= y;
            cout << x << endl;
        } else cout << x + k << endl;

    }

    return 0;
}