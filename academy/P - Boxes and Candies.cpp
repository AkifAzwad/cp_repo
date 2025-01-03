#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;


/////////constants/////////
//const int mod = 1e9 + 7;


//////////methods//////////


///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, x; cin >> n >> x;
	ll a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	ll ans = 0;
	for (int i = 0; i + 1 < n; ++i) {
		if (a[i] + a[i + 1] > x) {
			ll sum = a[i] + a[i + 1];
			ans += abs(sum - x);
			if (sum - x >= a[i + 1])a[i + 1] = 0;
			else a[i + 1] -= (sum - x);
		}
	}

	// for (int i = 0; i < n; ++i) {
	// 	cout << a[i] << " ";
	// } cout << endl;

	cout << ans << endl;

	return 0;
}