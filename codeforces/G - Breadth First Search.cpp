#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;



/////////constants/////////
//const int mod = 1e9 + 7;
const int N = 105;
std::vector<int> v[N];
int vis[N];
int dis[N];
//////////methods//////////



///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t; cin >> t;
	int n = t;

	memset(dis, -1, sizeof(dis));

	while (t--) {
		int x, len; cin >> x >> len;

		while (len--) {
			int node; cin >> node;
			v[x].push_back(node);
		}
	}

	queue<int> q;
	q.push(1);
	while (!q.empty()) {
		int pos = q.front();
		q.pop();
		vis[pos] = true;
		for (auto p : v[pos]) {
			if (!vis[p]) {
				q.push(p);
				if (dis[pos] == -1)dis[pos] = 0;
				dis[p] = dis[pos] + 1;
				vis[p] = true;
			}
		}

	}


	for (int i = 1; i <= n; ++i) {
		cout << i << " " << dis[i] << endl;
	}

	return 0;
}