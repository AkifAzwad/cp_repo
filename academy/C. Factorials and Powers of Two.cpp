#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;
#define int ll

/////////constants/////////
//const int mod = 1e9 + 7;


//////////methods//////////
int binary(ll n)
{
	ll c = 0;
	while (n)
	{
		c += n % 2;
		n /= 2;
	}
	return c;
}

///////////////////////////
signed main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	std::vector<int> fact(15);
	ll prod = 1;
	for (int i = 1; i <= 14; ++i) {
		prod *= i;
		fact[i] = prod;
	}

	int t; cin >> t;
	while (t--) {
		ll n; cin >> n;

		int ans = binary(n);
		// cout << ans << endl;

		for (ll i = 0; i < (1 << 14); ++i) {
			ll sum = 0;
			int cnt = 0;
			for (ll j = 0; j < 14; ++j) {
				if (i & (1 << j)) {
					sum += fact[j + 1];
					cnt++;
				}
			}
			if (sum <= n) {
				ll cur_sum = n - sum;
				int cur_cnt = binary(cur_sum);
				ans = min(ans, cnt + cur_cnt);
			}
		}
		cout << ans << endl;
	}



	return 0;
}