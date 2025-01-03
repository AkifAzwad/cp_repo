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

	int n, m; cin >> n >> m;
	int a[n + 5][m + 5];
	const int N = 1e5 + 6;
	std::vector<int> x[N], y[N];

	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= m; ++j) {
			int val; cin >> val;
			a[i][j] = val;
			x[val].push_back(i);
			y[val].push_back(j);
		}
	}





	ll ans = 0;
	ll sum, turn;
	for (int i = 1; i <= N - 6; ++i) {
		if (!x[i].empty()) {
			sort(x[i].begin(), x[i].end());
			sum = 0;
			turn = 0;
			for (auto p : x[i]) {
				ans += abs((turn * p) - sum);
				sum += p;
				turn++;
				// cout << p << " " << sum << " " << ans << endl;
			}
		}
		if (!y[i].empty()) {
			// cout << i << " " << y[i].size() << endl;
			sum = 0;
			turn = 0;
			sort(y[i].begin(), y[i].end());
			for (auto p : y[i]) {
				ans += abs((turn * p) - sum);
				sum += p;
				turn++;
				// cout << p << " " << sum << " " << ans << endl;
			}
		}
	}
	cout << ans << endl;
	return 0;
}