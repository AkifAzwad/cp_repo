#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;



/////////constants/////////
//const int mod = 1e9 + 7;
const int N = 1e5;
std::vector<int> v[N];
int vis[N];
int cnt, sum;
int a[N];
//////////methods//////////

void dfs(int x, int& cnt, int& sum) {
	vis[x] = 1; sum += a[x - 1];
	// cout << x << " " << cnt << endl;
	for (auto p : v[x]) {
		if (!vis[p])cnt++, dfs(p, cnt, sum);
	}

}

///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int pos = 1;
	int t; cin >> t;
	while (t--) {
		// Case 1: Yes
		cout << "Case " << pos++ << ": ";

		int n, m, avg;
		int x, y; cin >> n >> m;
		sum = 0;
		memset(vis, 0, sizeof(vis));
		for (int i = 0; i < n; ++i) {
			cin >> a[i]; sum += a[i];
			v[i + 1].clear();
		}
		for (int i = 0; i < m; ++i) {
			cin >> x >> y;
			v[x].push_back(y);
			v[y].push_back(x);
		}
		if (sum % n == 0) {
			avg = sum / n;
			int found = 0;
			for (int i = 0; i < n; ++i) {
				if (!vis[i + 1]) {
					cnt = 1; sum = 0;
					dfs(i + 1, cnt, sum);
					if (sum != cnt * avg  )found = 1;
					break;
				}
			}

			if (found)cout << "No\n";
			else cout << "Yes\n";
		}
		else {
			cout << "No\n";
		}

	}

	return 0;
}