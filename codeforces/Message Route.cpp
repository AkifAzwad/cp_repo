#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;



/////////constants/////////
//const int mod = 1e9 + 7;
const int N = 1e5 + 100;
std::vector<int> v[N];
int vis[N];
int dis[N];
int par[N];
//////////methods//////////



///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n, m;
	cin >> n >> m;

	while (m--) {
		int x, y; cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
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
				dis[p] = dis[pos] + 1;
				vis[p] = true;
				par[p] = pos;
			}
		}

	}


	std::vector<int> ans;
	int val = n;
	// ans.push_back(n);
	while (1) {
		ans.push_back(val);
		val = par[val];
		if (!par[val])break;
	}
	if (val == 1) {
		ans.push_back(1);
		reverse(ans.begin(), ans.end());
		cout << ans.size() << endl;
		for (auto p : ans) {
			cout << p << " ";
		}
	} else {
		cout << "IMPOSSIBLE\n";
	}






	return 0;
}