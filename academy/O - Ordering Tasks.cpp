#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;



/////////constants/////////
//const int mod = 1e9 + 7;
const int N = 105;
std::vector<int> v[N];
int vis[N], in[N];

//////////methods//////////



///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	while (1) {
		memset(vis, 0, sizeof(vis));
		memset(in, 0, sizeof(in));
		for (int i = 0; i < N; ++i) {
			v[i].clear();
		}

		int n, m;
		cin >> n >> m;
		if (n == 0 && m == 0)break;


		while (m--) {
			int x, y;
			cin >> x >> y;
			in[y]++;
			v[x].push_back(y);

		}
		std::vector<int> z;
		for (int i = 1; i <= n; ++i) {
			if (in[i] == 0)z.push_back(i);
		}



		// for (auto p : z) {
		// 	cout << p << " ";
		// } cout << endl;


		std::vector<int> ans;
		while (ans.size() < n) {
			if (z.empty())break;
			int cur = z.back();
			z.pop_back();
			ans.push_back(cur);
			vis[cur] = 1;
			for (auto p : v[cur]) {
				in[p]--;
				if (!vis[p] && in[p] == 0) {
					vis[p] = 1;
					z.push_back(p);
				}
			}


		}

		for (auto p : ans) {
			cout << p << " ";
		}
		cout << endl;
	}

	return 0;
}