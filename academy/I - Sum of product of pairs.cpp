#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;


/////////constants/////////
const int mod = 1e9 + 7;


//////////methods//////////


///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n; cin >> n;
	int a[n + 1];
	ll sum = 0;
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
		sum += a[i];
		sum %= mod;
	}

	int x, y;
	x = 1, y = n;
	ll ans = 0;
	for (int i = 1; i <= n; ++i) {
		sum -= a[i];
		if (sum < 0) sum += mod;

		ans += (sum * a[i]);
		ans %= mod;
		// cout << i << " " << x << endl;
	}
	cout << ans << endl;

	return 0;
}