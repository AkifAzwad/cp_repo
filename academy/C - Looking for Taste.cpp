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

	// freopen("looking.in", "r", stdin);

	int t; cin >> t;
	while (t--) {
		int n, k; cin >> n >> k;
		int a[n];
		set<int> s;
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
			s.insert(a[i]);
		}

		std::vector<int> v;
		for (auto p : s) {
			v.push_back(p);
		}

		std::vector<int> bits(25, 0);
		for (int i = 0; i < 21; ++i) {
			for (int j = 0; j < v.size(); ++j) {
				if (v[j] & (1 << i)) {
					bits[i] = max(bits[i], v[j]);
				}
			}
		}
		ll ans = 0;
		sort(bits.begin(), bits.end(), greater<int>());
		for (int i = 0; i < min(20, k); ++i) {
			ans |= bits[i];
		}
		cout << ans << endl;
		// cout << (11 & 2) << endl;

	}

	return 0;
}