#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;


/////////constants/////////
//const int mod = 1e9 + 7;
const int N = 1e4 + 9;
int vis[N], dis[N];
std::vector<int> v[N];
ll ans;
//////////methods//////////


///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n; cin >> n;
	for (int i = 0; i < n - 1; ++i) {
		int x, y; cin >> x >> y;
		v[x].push_back(y); v[y].push_back(x);
	}

	for (int i = 1; i <= n; ++i) {
		memset(vis, 0, sizeof vis);
		memset(dis, 0, sizeof dis);
		queue<int> q;
		q.push(i);
		while (!q.empty()) {
			int u = q.front();
			vis[u] = 1;
			q.pop();
			for (auto p : v[u]) {
				if (!vis[p]) {
					vis[p] = 1;
					dis[p] = dis[u] + 1;
					// cout << dis[p] << endl;
					if (dis[p] < 2)q.push(p);
					else ans++;
				}
			}

		}
	}



	cout << ans / 2 << endl;


	return 0;
}