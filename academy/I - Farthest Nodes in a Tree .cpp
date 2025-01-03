#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;



/////////constants/////////
//const int mod = 1e9 + 7;
const int N = 3e5 + 100;
int dis1[N], dis2[N];
std::vector< std::pair<int, int> > v[N];
int mx1, mx2;
int vis1[N], vis2[N];
int node;
//////////methods//////////
void dfs1(int x) {
	vis1[x] = 1;
	for (auto p : v[x]) {
		if (!vis1[p.first]) {
			dis1[p.first] = dis1[x] + p.second;
			// cout << p.first << " " << p.second << endl;
			if (dis1[p.first] > mx1) {
				node = p.first;
				mx1 = dis1[p.first];
			}

			dfs1(p.first);
		}
	}

}

void dfs2(int x) {
	vis2[x] = 1;
	for (auto p : v[x]) {
		if (!vis2[p.first]) {
			dis2[p.first] = dis2[x] + p.second;
			// cout << p.first << " " << p.second << endl;
			if (dis2[p.first] > mx2) {
				node = p.first;
				mx2 = dis2[p.first];
			}

			dfs2(p.first);
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
		memset(dis1, 0, sizeof(dis1));
		memset(dis2, 0, sizeof(dis2));
		memset(vis1, 0, sizeof(vis1));
		memset(vis2, 0, sizeof(vis2));
		mx1 = mx2 = 0; node = 0;
		for (int i = 0; i <= N; ++i) {
			v[i].clear();
		}
		int n; cin >> n;
		for (int i = 0; i < n - 1; ++i) {
			int x, y, w;
			cin >> x >> y >> w;
			v[x].push_back({y, w});
			v[y].push_back({x, w});
		}

		dfs1(0);
		dfs2(node);

		// Case 1: 100
		cout << "Case " << turn++ << ": ";
		cout << mx2 << endl;
		// cout << node << endl;
	}

	return 0;
}