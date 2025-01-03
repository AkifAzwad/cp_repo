#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;


/////////constants/////////
//const int mod = 1e9 + 7;
const int N = 1e2 + 9;
bool f[N];
ll val[N];
int vis[N];
std::vector<int> v[N];
ll p1 = 1, p2 = 1;
//////////methods//////////
void dfs(int x) {
	// cout << val[x] << endl;
	if (val[x] == 0)val[x] = p1;
	vis[x] = 1;
	for (auto p : v[x]) {
		if (!vis[p]) {
			if (val[x] == p1)val[p] = p2;
			dfs(p);
		}
	}

}

///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);


	int num = N - 9;
	vector<int> primes;
	f[1] = true;
	for (int i = 2; i <= num; i++) {
		if (!f[i]) {
			primes.push_back(i);
			for (int j = i + i; j <= num; j += i) {
				f[j] = true;
			}
		}
	}


	int cnt = 0;
	ll mx = 1e18;
	int l = 0, r = primes.size() - 1;
	int turn = 0;
	while (l < r) {
		if (!turn)p1 *= primes[l];
		else p2 *= primes[l];
		l++;
		// cout << l << " " << primes[l] << endl;
		if (l > 13 && !turn) {
			turn = 1;
		}
	}
	p1 *= primes[l];
	// cout << primes[l] << endl;
	// cout << (p1 <= mx) << " " << (p2 <= mx) << endl;
	// cout << p1 << " " << p2 << endl;


	int t; cin >> t;
	while (t--) {
		memset(vis, 0, sizeof vis);
		memset(val, 0, sizeof val);
		for (int i = 0; i < N; ++i) {
			v[i].clear();
		}
		int n; cin >> n;
		for (int i = 0; i < n - 1; ++i) {
			int x, y; cin >> x >> y;
			v[x].push_back(y);
			v[y].push_back(x);
		}

		dfs(1);

		for (int i = 1; i <= n; ++i) {
			cout << val[i] << " ";
		} cout << endl;


	}


	return 0;
}