#include "bits/stdc++.h"
using namespace std;

#define int long long
/////////data types/////////
using ll = long long;


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

		int ans = 0;
		for (int i = 0; i + 1 < n; ++i) {
			int num = max(a[i], a[i + 1]) * min(a[i], a[i + 1]);
			ans = max(ans, num);
		}
		cout << ans << endl;

	}

	return 0;
}