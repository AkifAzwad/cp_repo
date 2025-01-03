#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;



/////////constants/////////
//const int mod = 1e9 + 7;
const int N = 300;
std::vector<int> v[N];
int vis[N], col[N];
bool ok = true;
//////////methods//////////
void dfs(int x) {
	vis[x] = 1;
	for (auto p : v[x]) {
		if (!vis[p]) {
			if (!col[p])col[p] = col[x] ^ 1;
			dfs(p);
		}
		else if (col[p] == col[x])ok = false;
	}

}


///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	while (1) {
		memset(vis, 0, sizeof(vis));
		memset(col, 0, sizeof(col));
		for (int i = 0; i <= N; ++i) {
			v[i].clear();
		}
		ok = true;
		int n; cin >> n;
		if (n == 0)break;
		int edge; cin >> edge;
		while (edge--) {
			int x, y;
			cin >> x >> y;
			v[x].push_back(y);
			v[y].push_back(x);
		}

		dfs(0);

		if (!ok)cout << "NOT BICOLORABLE.\n";
		else cout << "BICOLORABLE.\n";

	}


	return 0;
}