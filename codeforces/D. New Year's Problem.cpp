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
		int n, m; cin >> m >> n;
		std::vector<int> v[m];
		for (int i = 0; i < m; ++i) {
			for (int j = 0; j < n; ++j) {
				int x; cin >> x;
				v[i].push_back(x);
			}
		}
		std::vector<int> ans;
		for (int i = 0; i < m; ++i) {
			int mn = 1e9;
			for (int j = 0; j < n; ++j) {
				mn = min(v[i][j], mn);
			}
			ans.push_back(mn);
		}
		sort(ans.begin(), ans.end());
		cout << ans[1] << endl;

	}

	return 0;
}