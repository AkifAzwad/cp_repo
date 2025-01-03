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
		std::vector<std::pair<int, int> > weight;
		std::map<int, int> pos;
		for (int i = 0; i < m; ++i) {
			int x, w;
			cin >> x >> w;
			weight.push_back({w, x});
			pos[x] = i + 1;
		}
		sort(weight.begin(), weight.end());
		ll ans = 0;
		std::vector<int> points;
		for (int i = 0; i < 2 * n; ++i) {
			ans += weight[i].first;

			points.push_back(weight[i].second);
		}
		sort(points.begin(), points.end());
		cout << ans << endl;
		int l = 0, r = points.size() - 1;
		while (l < r) {
			cout << pos[points[l]] << " " << pos[points[r]] << endl;
			l++; r--;
		}
		cout << endl;

	}


	return 0;
}