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

	int n, k, m; cin >> n >> k >> m;
	string s[n + 5];
	for (int i = 1; i <= n; ++i) {
		cin >> s[i];
	}

	std::map<string, int> map;
	for (int i = 1; i <= n; ++i) {
		int val; cin >> val;
		map[s[i]] = val;
	}

	std::vector<int> v[k + 3];
	for (int i = 1; i <= k; ++i) {
		int x; cin >> x;
		int mn = 1e9;
		v[i].push_back(0);
		for (int j = 1; j <= x; j++) {
			int val; cin >> val;
			v[i].push_back(val);
			mn = min(map[s[val]], mn);
		}
		for (int j = 1; j <= x; ++j) {
			int pos = v[i][j];
			map[s[pos]] = mn;
		}
	}

	ll ans = 0;
	for (int i = 0; i < m; ++i) {
		string x; cin >> x;
		ans += map[x];
	}
	cout << ans << endl;

	return 0;
}