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
		ll l, r, a; cin >> l >> r >> a;
		ll ans = (r / a) + (r % a);

		if ((r / a) != (l / a)) {
			ll p = r / a;
			p--;
			r = (a * p) + (a - 1);
		}
		ans = max(ans, (r / a) + (r % a));
		// cout << r << " ";
		cout << ans << endl;
	}

	return 0;
}