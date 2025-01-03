#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;



/////////constants/////////
//const int mod = 1e9 + 7;
const int N = 1e5 + 9;
std::vector<int> v[N];
int vis[N];
//////////methods//////////

void dfs(int x) {
	vis[x] = 1;
	for (auto p : v[x]) {
		if (!vis[p])dfs(p);
	}

}

///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, m; cin >> n >> m;
	int x, y;
	int cnt = 0;
	std::vector<int> ans;
	for (int i = 0; i < m; ++i) {
		cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}

	for (int i = 1; i <= n; ++i) {
		if (!vis[i]) {
			dfs(i);
			cnt++;
			ans.push_back(i);
		}
	}

	cout << ans.size() - 1 << endl;
	if (ans.size() - 1) {
		int last = 0;
		for (int i = 0; i < ans.size() - 1; ++i) {
			cout << ans[i] << " " << ans[i + 1] << endl;
		}
	}


	return 0;
}