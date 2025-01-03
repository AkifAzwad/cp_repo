#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;



/////////constants/////////
//const int mod = 1e9 + 7;
const int N = 2100;
int vis[N];
int col[N];
bool ok = true;
std::vector<int> v[N];
//////////methods//////////
void dfs(int x) {
	vis[x] = 1;
	for (auto p : v[x]) {
		if (!vis[p]) {
			vis[p] = 1;
			col[p] = col[x] ^ 1;
			dfs(p);
		} else {
			if (col[p] == col[x]) {
				ok = false;
				// return;
			}
		}
	}

}


///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	int turn = 1;
	while (t--) {
		for (int i = 0; i <= N; ++i) {
			v[i].clear();
		}
		memset(vis, 0, sizeof(vis));
		memset(col, 0, sizeof(col));
		ok = true;
		int node, edge;
		cin >> node >> edge;
		while (edge--) {
			int x, y; cin >> x >> y;
			v[x].push_back(y);
			v[y].push_back(x);
		}


		for (int i = 1; i <= node; ++i) {
			if (!vis[i])dfs(i);
			if (!ok)break;
		}
		// Scenario #1:
		cout << "Scenario #" << turn++ << ":\n";
		if (!ok)cout << "Suspicious bugs found!\n";
		else cout << "No suspicious bugs found!\n";

	}




	return 0;
}