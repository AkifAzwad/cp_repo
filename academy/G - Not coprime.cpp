#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;
#define int ll

/////////constants/////////
//const int mod = 1e9 + 7;
const int N = 60;
int spf[N], cnt[N], a[N];
//////////methods//////////


///////////////////////////
signed main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	for (int i = 2; i < N; i++) {
		spf[i] = i;
	}
	for (int i = 2; i < N; i++) {
		for (int j = i; j < N; j += i) {
			spf[j] = min(spf[j], i);
		}
	}

	int n; cin >> n;
	int ans = 1e18;
	set<int> s;
	for (int i = 0; i < n; ++i) {
		int x;
		cin >> x;
		a[i] = x;
		while (x > 1) {
			s.insert(spf[x]);
			x /= spf[x];
		}
	}
	std::vector<int> v;
	for (auto p : s) {
		// cout << p << " ";
		v.push_back(p);
	}

	int len = v.size();
	for (int i = 0; i < (1 << len); ++i) {
		int num = 1;
		for (int j = 0; j < len; ++j) {
			if (i & (1 << j)) {
				num *= v[j];
			}
		}
		if (num == 1)continue;
		int found = 0;
		// cout << num << endl;
		for (int k = 0; k < n; ++k) {
			// cout << __gcd(a[k], num) << " ";
			if (__gcd(a[k], num) == 1)found = 1;
		}
		// cout << endl;
		if (!found) {
			ans = min(ans, num);
		}
	}
	cout << ans << endl;



	return 0;
}