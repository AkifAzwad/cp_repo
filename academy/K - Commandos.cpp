#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;



/////////constants/////////
//const int mod = 1e9 + 7;
const int N = 105;
int dis1[N], dis2[N], vis1[N], vis2[N];
std::vector<int> v[N];
//////////methods//////////



///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	int turn = 1;
	while (t--) {
		cout << "Case " << turn++ << ": ";
		memset(dis1, 0, sizeof(dis1));
		memset(vis1, 0, sizeof(vis1));
		memset(dis2, 0, sizeof(dis2));
		memset(vis2, 0, sizeof(vis2));

		for (int i = 0; i < N; ++i) {
			v[i].clear();
		}

		int n, r;
		int b, e;
		cin >> n >> r;
		while (r--) {
			int x, y;
			int b, e;
			cin >> x >> y;
			v[x].push_back(y);
			v[y].push_back(x);

		}
		cin >> b >> e;



		queue<int> q1, q2;

		q1.push(b);
		vis1[b] = 1;
		while (!q1.empty()) {
			int x = q1.front();
			q1.pop();
			for (auto p : v[x]) {
				if (!vis1[p]) {
					q1.push(p);
					vis1[p] = 1;
					dis1[p] = dis1[x] + 1;
				}
			}

		}

		q2.push(e);
		vis2[e] = 1;
		while (!q2.empty()) {
			int x = q2.front();
			q2.pop();
			for (auto p : v[x]) {
				if (!vis2[p]) {
					q2.push(p);
					vis2[p] = 1;
					dis2[p] = dis2[x] + 1;
				}
			}

		}


		int ans = 0;
		for (int i = 0; i < n; ++i) {
			ans = max(ans, dis1[i] + dis2[i]);
		}

		cout << ans << endl;

	}
	return 0;
}