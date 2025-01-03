#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;


/////////constants/////////
//const int mod = 1e9 + 7;
const int N = 1e6 + 9;
std::vector<int> v[N];
int vis[N];
int a[N];
//////////methods//////////
std::set<int> path;
void dfs(int x)
{
	// cout << x << " ";
	vis[x] = 1;
	for (auto p : v[x]) {
		if (!vis[p]) {
			vis[p] = 1;
			path.insert(a[p]);
			dfs(p);
		}
	}

}

///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, m; cin >> n >> m;

	std::map<int, int> pos;
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
		pos[a[i]] = i;
	}
	for (int i = 0; i < m; ++i) {
		int x, y; cin >> x >> y;
		v[x].push_back(y);
		v[y].push_back(x);
	}




	std::vector<int> ans(n + 1);
	for (int i = 1; i <= n; ++i) {
		ans[i] = a[i];
	}

	for (int i = 1; i <= n; ++i) {
		if (!vis[i]) {
			path.clear();
			path.insert(a[i]);
			dfs(i);
			std::vector<int> temp;
			for (auto it = path.begin(); it != path.end(); ++it) {
				int val = *it;
				int cur = pos[val];
				temp.push_back(cur);
				// cout << temp.back() << endl;
			}
			sort(temp.begin(), temp.end());
			int x = 0;
			for (auto it = path.rbegin(); it != path.rend(); ++it) {
				int val = *it;
				ans[temp[x]] = val;
				// cout << temp[x] << " " << val << endl;
				x++;
			}
		}
	}

	for (int i = 1; i < ans.size(); ++i) {
		cout << ans[i] << " ";
	}



	return 0;
}