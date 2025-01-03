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

	int t; cin >> t;
	while (t--) {
		int n, m; cin >> n >> m;
		std::vector<int> v[n];
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				int x; cin >> x;
				v[i].push_back(x);
			}
		}

		std::map<int, int> cnt1;
		ll ans = 0;
		for (int i = 0; i < m; ++i) {
			cnt1[v[0][i]]++;
		}
		for (int i = 1; i < n; ++i) {
			std::map<int, int> cnt2;
			for (int j = 0; j < m; ++j) {
				cnt2[v[i][j]]++;
			}
			for (auto p : cnt1) {
				int l, r;
				l = p.first; r = p.second;
				ans += min(r, cnt2[l]);
				// cout << l << " " << r << " " << cnt2[l] << endl;
			}

			cnt1.clear();
			for (int j = 0; j < m; ++j) {
				cnt1[v[i][j]] = cnt2[v[i][j]];
			}
		}
		cout << ans << "\n";


	}

	return 0;
}