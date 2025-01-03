#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;


/////////constants/////////
//const int mod = 1e9 + 7;
const int N = 1e3 + 5;
std::vector<int> v[N];
int vis[N], dis[N], deg[N];
//////////methods//////////


///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		memset(dis, 0, sizeof dis);
		memset(vis, 0, sizeof vis);
		memset(deg, 0, sizeof deg);
		for (int i = 0; i < N; ++i) {
			v[i].clear();
		}

		int n, node; cin >> n >> node;
		if (n == 1) {
			cout << "Ayush\n";
		}
		else {
			for (int i = 0; i < n - 1; ++i) {
				int x, y; cin >> x >> y;
				v[x].push_back(y);
				v[y].push_back(x);
				deg[x]++;
				deg[y]++;
			}

			queue<int> q;
			q.push(node);
			while (!q.empty()) {
				int x = q.front();
				q.pop();
				vis[x] = 1;
				for (auto p : v[x]) {
					if (!vis[p]) {
						vis[p] = 1;
						q.push(p);
						dis[p] = dis[x] + 1;
					}
				}

			}

			// for (int i = 1; i <= n; ++i) {
			// 	cout << i << " " << dis[i] << endl;
			// } cout << endl;
			int turn = 0;
			while (1) {
				int ind = 1, mx = 0, zero = 0;
				for (int i = 1; i <= n; ++i) {
					if (mx < dis[i]) {
						ind = i;
						mx = dis[i];
					}
					if (dis[i] == 0)zero = 1;
				}
				// cout << ind << " " << mx << endl;
				if (deg[node] <= 1) {
					if (!turn)cout << "Ayush\n";
					else cout << "Ashish\n";
					break;
				} else {
					dis[ind] = 0;
					deg[ind]--;
					for (auto p : v[ind]) {
						if (deg[p])deg[p]--;
					}

				}
				turn = !turn;
			}
		}
	}



	return 0;
}