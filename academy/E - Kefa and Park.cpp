#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;



/////////constants/////////
//const int mod = 1e9 + 7;
const int N = 1e5 + 9;
int a[N];
std::vector<int> v[N];
int vis[N];
int cnt;
int n, m;
//////////methods//////////

void dfs(int x, int num) {

	if (num > m)return;

	vis[x] = true;
	bool last = true;

	// cout << x << "\n";
	for (auto p : v[x]) {
		if (!vis[p]) {
			// cout << x << " " << p << " " << num << endl;
			last = false;
			dfs(p, a[p] ? num + 1 : 0);

		}
	}
	if (last)cnt++;

	// cout << endl;
	// cout << x << " num " << num << " " << cnt << endl;
}


///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;

	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
	}

	for (int i = 0; i < n - 1; ++i) {
		int l, r; cin >> l >> r;
		v[l].push_back(r);
		v[r].push_back(l);
	}

	int num = 0;

	dfs(1, a[1]);
	cout << cnt << endl;

	return 0;
}