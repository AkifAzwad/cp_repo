#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;


/////////constants/////////
//const int mod = 1e9 + 7;
const int N = 1e5 + 100;
ll pre[N];
bool cnt[N];
//////////methods//////////


///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);


	for (int i = 1; i < 10; ++i) {
		cnt[i] = true;
	}
	ll ten = 10;
	for (int i = 1; i < 1000; ++i) {
		ll x = i, y = 0;
		if (x >= ten) {
			ten *= 10;
		}
		ll temp = x;
		while (temp) {
			y = y * 10 + temp % 10;
			temp /= 10;
		}

		ll sum = x * ten +  y;
		if (x % 10 == 0)sum = x * ten  + y;
		if (sum <= N - 9)cnt[sum] = true;
		// cout << sum << endl;
	}

	ten = 1;
	for (int i = 1; i < 100; ++i) {
		ll x = i, y = 0;
		if (x >= ten) {
			ten *= 10;
		}
		ll temp = x;
		while (temp) {
			y = y * 10 + temp % 10;
			temp /= 10;
		}
		for (int mid = 0; mid < 10; ++mid) {
			ll sum = x * ten +  mid * (ten / 10);
			sum = sum * 10 + y;
			if (sum <= N - 9)cnt[sum] = true;
		}

	}


	for (int i = 1; i <= N - 9; ++i) {
		if (cnt[i])pre[i] = pre[i - 1] + i;
		else pre[i] += pre[i - 1];
		// if (cnt[i])cout << i << endl;
	}


	// cout << pre[100000] << " " << pre[0] << endl;
	int t; cin >> t;
	while (t--) {
		int l, r; cin >> l >> r;
		cout << pre[r] - pre[l - 1] << endl;
	}

	return 0;
}