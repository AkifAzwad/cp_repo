#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;
#define int ll

/////////constants/////////
//const int mod = 1e9 + 7;
const int inf = 1e9;
const int N = 2e5 + 5;
//////////methods//////////


///////////////////////////
signed main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int a[n + 1], b[n + 1];
		for (int i = 1; i <= n; ++i) {
			cin >> a[i];
		}
		for (int i = 1; i <= n; ++i) {
			cin >> b[i];
		}
		ll a1, a2, b1, b2;
		a1 = a[1], a2 = a[n]; b1 = b[1], b2 = b[n];
		ll low_a1 = inf, low_a2 = inf;
		ll dif_a1 = inf, dif_a2 = inf;
		ll low_b1 = inf, low_b2 = inf;
		ll dif_b1 = inf, dif_b2 = inf;
		int dif1, dif2;

		std::map<int, int> vis_a;
		for (int i = 1; i <= n; ++i) {
			dif1 = abs(a1 - b[i]);
			dif2 = abs(a2 - b[i]);
			if (dif1 < dif_a1) {
				low_a1 = i;
				dif_a1 = dif1;
			}
			if (dif2 < dif_a2) {
				low_a2 = i;
				dif_a2 = dif2;
			}

		}
		vis_a[1] = low_a1;
		// vis_a[low_a1] = 1;
		vis_a[n] = low_a2;
		// vis_a[low_a2] = n;
		// cout << vis_a[1] << " " << vis_a[n] << endl;


		for (int i = 1; i <= n; ++i) {
			dif1 = abs(b1 - a[i]);
			dif2 = abs(b2 - a[i]);
			if (dif1 < dif_b1) {
				low_b1 = i;
				dif_b1 = dif1;
			}
			if (dif2 < dif_b2) {
				low_b2 = i;
				dif_b2 = dif2;
			}
		}

		if (1 == vis_a[low_b1])dif_b1 = 0;
		if (n == vis_a[low_b2])dif_b2 = 0;
		// cout << low_b1 << " " << low_b2 << endl;
		// if (low_a1 == 0 || low_a1 == n - 1)dif_a1 = 0;
		// if (low_a2 == 0 || low_a2 == n - 1)dif_a2 = 0;

		ll cur = abs(a1 - b1) + abs(a2 - b2);
		cout << min(cur, dif_a1 + dif_a2 + dif_b1 + dif_b2) << endl;
	}

	return 0;
}