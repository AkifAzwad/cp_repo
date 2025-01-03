#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;


/////////constants/////////
//const int mod = 1e9 + 7;


//////////methods//////////
ll sod(ll n) {
	ll sum = 0;
	while (n) {
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	ll n, s; cin >> n >> s;
	ll l = 1, r = n;
	ll m;
	ll lo = n;
	while (l <= r) {
		m = l + (r - l) / 2;
		if (m - sod(m) >= s) {
			// cout << m << " " << sod(m) << endl;
			r = m - 1;
			lo = min(lo, m);
		} else l = m + 1;
	}
	if (lo - sod(lo) >= s)cout << n - lo + 1 << endl;
	else cout << "0\n";

	return 0;
}