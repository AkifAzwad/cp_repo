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

	ll n; cin >> n;


	ll num = 1, ans = 1e18, mx = 1e6;
	for (int i = 0; i <= 60; ++i) {
		ll x, y, z;
		y = num;

		x = n / num;
		z = n - (num * x);
		ll sum = x + i + z;
		if (x * num + z == n)ans = min(ans, sum);

		num *= 2;

	}



	cout << ans << endl;


	return 0;
}