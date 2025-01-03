#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;
#define int long long
/////direction_array///////

/////////constants/////////

//////////methods//////////
int cal(int x) {
	int prm = 5;
	int cnt = 0;

	while (x / prm) {
		cnt += (x / prm);
		prm *= 5;
	}
	return cnt;
}
///////////////////////////
signed main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	int turn = 1;
	while (t--) {
		int n; cin >> n;

		int ans = -1;

		ll low = 1, high = 1e18;
		while (low <= high) {
			ll mid = (low + high) / 2;
			ll cur = cal(mid);
			// cout << cur << endl;
			if (cur >= n) {
				if (cur == n)ans = mid;
				high = mid - 1;
			} else {
				low = mid + 1;
			}
		}


		cout << "Case " << turn++ << ": ";
		if (ans != -1)cout << ans << endl;
		else cout << "impossible\n";
	}


	return 0;
}