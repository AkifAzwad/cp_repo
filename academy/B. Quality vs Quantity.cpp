#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;
#define int ll

/////////constants/////////
//const int mod = 1e9 + 7;


//////////methods//////////


///////////////////////////
signed main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int a[n];
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		sort(a, a + n);

		int l = 0, r = n - 1;
		int sum1 = a[l], sum2 = a[r], cnt1 = 1, cnt2 = 1;
		l++; r--;
		int found = 0;
		while (1) {
			// cout << cnt1 << " " << cnt2 << " " << sum1 << " " << sum2 << endl;
			if (cnt1 > cnt2 && sum1 < sum2) {
				found = 1;
				break;
			}
			if (l > r)break;
			if (sum1 >= sum2) {
				sum2 += a[r];
				cnt2++;
				r--;
			} else {
				sum1 += a[l];
				l++;
				cnt1++;
			}
		}
		if (found)cout << "YES\n";
		else cout << "NO\n";
	}

	return 0;
}