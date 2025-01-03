#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;
#define int ll

/////////constants/////////
const int mod = 1e9 + 7;


//////////methods//////////
ll pwr(ll a, ll b, ll m = mod) {
	a %= m;
	ll res = 1;
	while (b > 0) {
		if (b & 1)
			res = res * a % m;
		a = a * a % m;
		b >>= 1;
	}
	return res;
}
int cmod(int x) {
	x %= mod;
	if (x < 0) x += mod;
	return x;
}


///////////////////////////
signed main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int A, B, n, x; cin >> A >> B >> n >> x;
	// int ans = gp(A, B, n, x);
	int p, q;
	p = (pwr(A, n) * x) % mod;
	if (A == 1) {
		n %= mod;
		B %= mod;
		q = n * B;
	} else {
		// A %= mod; B %= mod;
		q = (B * cmod(pwr(A, n) - 1)) % mod;
		q *= pwr(A - 1, mod - 2);
		q %= mod;
	}


	cout << (p + q) % mod << endl;
	// cout << pwr(3, 4);



	return 0;
}