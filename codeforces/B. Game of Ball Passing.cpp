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

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		ll a[n];
		ll sum = 0;
		ll mx = 0;
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
			mx = max(mx, a[i]);
			sum += a[i];
		}
		sum -= mx;
		if (mx) {
			if (mx <= sum)cout << "1\n";
			else cout << mx - sum << endl;
		} else cout << sum << endl;
	}

	return 0;
}