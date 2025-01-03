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

	ll t; cin >> t;
	ll pos = 1;
	while (t--) {
		ll n; cin >> n;
		ll found = 0;
		ll x = 1, y = 2;
		if (n % 2 == 0) {
			while (x >= 1) {
				x = n / y;
				if (x % 2 != 0 && x != 1) {
					found = 1;
					break;
				}
				y *= 2;
				// n /= 2;
			}
		}

		// Case 1: 5 2
		cout << "Case " << pos++ << ": ";
		if (found)cout << x << " " << y << endl;
		else cout << "Impossible\n";
	}

	return 0;
}