#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;



/////////constants/////////
//const int mod = 1e9 + 7;
const int N = 105;
std::vector<int> v[N];
int vis[N];
int v1[N][2];
int cnt = 1;
//////////methods//////////

void dfs(int x) {
	vis[x] = 1;
	v1[x][0] = cnt++;
	// cout << x << " ";
	for (auto p : v[x]) {
		// cout << p << " ";
		if (!vis[p])dfs(p);

	}
	v1[x][1] = cnt++;
	// cout << endl;
}

///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, t; cin >> t;
	n = t;
	while (t--) {
		int node, cnt;
		cin >> node >> cnt;
		while (cnt--) {
			int x; cin >> x;
			v[node].push_back(x);
		}
		sort(v[node].begin(), v[node].end());
	}

	for (int i = 1; i <= n; ++i) {
		if (!vis[i])dfs(i);
	}

	for (int i = 1; i <= n; ++i) {
		cout << i << " " << v1[i][0] << " " << v1[i][1] << endl;
	}

	return 0;
}