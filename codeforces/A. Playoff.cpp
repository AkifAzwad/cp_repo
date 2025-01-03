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
		ll n; cin >> n;
		ll x = 1;
		for (int i = 0; i < n; ++i) {
			x *= 2;
		}
		ll ans = x - 1;
		cout << ans << endl;
	}

	return 0;
}