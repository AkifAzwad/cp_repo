#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;



/////////constants/////////
const int mod = 1e9 + 7;
const int N = 1e5 + 9;
int n;
std::vector<int> v[N];
int dp[N][2];
//////////methods//////////
void dfs(int u, int par) {
	dp[u][1] = 1;
	dp[u][0] = 1;
	for (auto p : v[u]) {
		if (p != par) {
			dfs(p, u);
			dp[u][1] = (1LL * dp[u][1] * (dp[p][1] + dp[p][0])) % mod;
			dp[u][0] = (1LL * dp[u][0] * dp[p][1]) % mod;
		}
	}

}


///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for (int i = 0; i < n - 1; ++i) {
		int l, r;
		cin >> l >> r;
		v[l].push_back(r);
		v[r].push_back(l);
	}

	dfs(1, 0);
	cout << (dp[1][0] + dp[1][1]) % mod << endl;

	return 0;
}