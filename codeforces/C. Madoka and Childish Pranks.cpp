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
		string s[n];
		int grid[n + 1][m + 1];
		int ans[n + 1][m + 1];
		for (int i = 0; i < n; ++i) {
			cin >> s[i];
		}
		memset(grid, -1, sizeof grid);
		memset(ans, 0, sizeof ans);
		for (int i = 1; i <= n; ++i) {
			for (int j = 1; j <= m; ++j) {
				grid[i][j] = s[i - 1][j - 1] - '0';
			}
		}

		int found = 0;
		ll last = 0;
		std::vector<std::pair<int, int> > v;
		for (int i = n; i >= 1; --i) {
			for (int j = m; j >= 1; --j) {
				if (grid[i][j] == 1) {
					last++;
					if (grid[i][j - 1] != -1) {
						v.push_back({i, j - 1});
						v.push_back({i, j});
					} else if (grid[i - 1][j] != -1) {
						v.push_back({i - 1, j});
						v.push_back({i, j});
					} else {
						found = 1;
					}
				}
			}
		}
		if (found) {
			cout << "-1\n";
		} else {
			cout << last << endl;
			for (int i = 0; i < v.size(); i += 2) {
				cout << v[i].first << " " << v[i].second << " ";
				cout << v[i + 1].first << " " << v[i + 1].second << endl;
			}

		}


	}

	return 0;
}