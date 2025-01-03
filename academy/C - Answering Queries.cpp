#include "bits/stdc++.h" // Include every standard library 
using namespace std;


///////////////data types//////////////////
using ll = long long;



/////////constants lowerCamelCase/////////
//const int mod = 1e9 + 7;



///////////methods lowerCamelCase//////////
ll cal(ll n, ll i, ll a[]) {
	return ((n - i) * a[i]) - ((i - 1) * a[i]);
}


/////////////////////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	ll t; cin >> t;


	ll pos = 1;
	while (t--) {
		ll n, q; cin >> n >> q;
		ll a[n + 1];
		ll sum = 0;
		for (ll i = 1; i <= n; ++i) {
			cin >> a[i];
		}

		for (ll i = 1; i <= n; ++i) {
			sum += cal(n, i, a);
		}
		// cout << sum << endl;
		// Case 1:
		cout << "Case " << pos++ << ":\n";
		while (q--) {
			ll type;
			cin >> type;
			if (type == 0) {
				ll pos, v;
				cin >> pos >> v;
				pos++;
				// cout << sum << " " << check(n, pos, a) << endl;
				sum -= cal(n, pos, a);
				a[pos] = v;
				sum += cal(n, pos, a);
				// cout << sum << " " << check(n, pos, a) << endl;
				// cout << endl;
			} else {
				cout << sum << endl;

			}
		}

	}


	return 0;
}