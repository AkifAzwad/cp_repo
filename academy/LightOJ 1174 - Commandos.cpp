#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;



/////////constants/////////
//const int mod = 1e9 + 7;
const int N = 1e4 + 100;
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
		int k, n, m; cin >> k >> n >> m;
		std::vector<int> person;
		int ans[N];

		for (int i = 1; i <= N; ++i) {
			ans[i] = 1;
			v[i].clear();
		}

		while (k--) {
			int x; cin >> x;
			person.push_back(x);
		}
		while (m--) {
			int x, y;
			cin >> x >> y;
			v[x].push_back(y);
		}


		for (auto p : person) {
			queue<int> q;
			int vis[N] = {0};

			q.push(p); vis[p] = 1;
			while (!q.empty()) {
				int pos = q.front();
				q.pop();
				for (auto w : v[pos]) {
					if (!vis[w]) {
						q.push(w);
						vis[w] = 1;
					}
				}

			}

			for (int i = 1; i <= N; ++i) {
				if (!vis[i])ans[i] = 0;
			}

		}

		int sum = 0;
		for (int i = 1; i <= n; ++i) {
			sum += ans[i];
		}
		cout << sum << endl;
	}

	return 0;
}