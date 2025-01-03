#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;



/////////constants/////////
//const int mod = 1e9 + 7;
const int N = 1e5;
std::vector<int> v[N];
int vis[N], dis[N];
//////////methods//////////



///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int turn = 1;
	while (1) {
		int nc; cin >> nc;
		if (!nc)break;

		for (int i = 0; i <= N; ++i) {
			v[i].clear();
		}

		set<int> nodes;
		while (nc--) {
			int x, y; cin >> x >> y;
			v[x].push_back(y);
			v[y].push_back(x);
			nodes.insert(x);
			nodes.insert(y);
		}


		while (1) {
			int start, val;
			cin >> start >> val;
			if (start == 0 && val == 0)break;

			memset(vis, 0, sizeof(vis));
			memset(dis, 0, sizeof(dis));
			vector<int> s;
			queue<int> q;

			q.push(start); vis[start] = 1;
			while (!q.empty()) {
				int x = q.front();
				q.pop();
				for (auto p : v[x]) {
					if (!vis[p]) {
						q.push(p);
						vis[p] = 1;
						dis[p] = dis[x] + 1;
						if (dis[p] <= val)s.push_back(p);
					}
				}
			}


			int a = nodes.size() - 1, b = s.size();
			cout << "Case " << turn++ << ": " << a - b << " nodes not reachable from node " <<
			     start << " with TTL = " << val << ".\n";
		}

	}

	return 0;
}