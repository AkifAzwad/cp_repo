#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;



/////////constants/////////
//const int mod = 1e9 + 7;
const int N = 2e4 + 100;
int a[N];
int dis[N];
int vis[N];
std::vector<int> v[N];
//////////methods//////////



///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n; cin >> n;
	std::vector<int> ans;
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
		dis[i] = 1;
		if (a[i] != -1)v[a[i]].push_back(i);
	}


	int mx = 1;
	for (int i = 1; i <= n; ++i) {

		memset(vis, 0, sizeof(vis));
		queue<int> q;
		q.push(i);
		while (!q.empty()) {
			int x = q.front();
			q.pop();
			for (auto p : v[x]) {
				if (!vis[p]) {
					vis[p] = 1;
					q.push(p);
					dis[p] = dis[x] + 1;
					// cout << p << " " << dis[p] << endl;
					mx = max(mx, dis[p]);
				}
			}

		}



	}


	cout << mx << endl;


	return 0;
}