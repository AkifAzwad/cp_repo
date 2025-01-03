#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;


/////////constants/////////
//const int mod = 1e9 + 7;


//////////methods//////////
ll lcm(ll a, ll b) {
	return (a * b) / (__gcd(a, b));
}

///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	ll x; cin >> x;
	ll mx = x, p1 = 1, p2 = x;
	for (ll i = 1; i * i <= x; ++i) {
		if (x % i == 0) {
			ll a, b;
			a = i; b = x / i;
			if (lcm(a, b) == x) {
				ll cur = max(a, b);
				if (cur < mx) {
					cur = mx;
					p1 = a; p2 = b;
				}
			}
		}
	}
	cout << p1 << " " << p2 << endl;


	return 0;
}