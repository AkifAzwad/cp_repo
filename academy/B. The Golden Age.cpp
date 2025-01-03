#include "bits/stdc++.h"
using namespace std;

#define int long long
/////////data types/////////
using ll = long long;


/////////constants/////////
//const int mod = 1e9 + 7;
const ll N = 2e18;

//////////methods//////////


///////////////////////////
signed main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	ll x, y, l, r;
	cin >> x >> y >> l >> r;
	set<ll> v;

	ll a = 1, b;
	for (int i = 0; i < 100; ++i) {
		b = 1;
		if (a > r)break;
		for (int j = 0; j < 100; ++j) {
			if (b > r)break;
			if (a + b > r)break;
			if (a + b >= l && a + b <= r)v.insert(a + b);
			if (b > N / y)break;
			b *= y;
		}
		if (a > N / x)break;
		a *= x;
	}



	std::vector<ll> v1;
	v.insert(l - 1);
	v.insert(r + 1);
	for (auto p : v) {
		v1.push_back(p);
	}
	ll mx = 0;
	for (int i = 1; i < v1.size(); ++i) {
		ll dif = v1[i] - v1[i - 1] - 1;
		mx = max(mx, dif);
	}
	cout << mx << endl;





	return 0;
}