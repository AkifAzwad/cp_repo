#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;



/////////constants/////////
//const int mod = 1e9 + 7;
const int N = 200;
const int W = 1e5 + 100;
ll a[N], b[N];
ll dp[N][W];
ll n, weight;
//////////methods//////////
ll fun(int pos, int w) { //max weight for this pos
	if (pos == n)return 0;
	if (dp[pos][w] != -1)return dp[pos][w];
	ll ans = fun(pos + 1, w);
	if (w + a[pos] <= weight)ans = max(ans, fun(pos + 1, w + a[pos]) + b[pos]);
	return dp[pos][w] = ans;
}


///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> weight;
	for (int i = 0; i < n; ++i) {
		cin >> a[i] >> b[i];
	}
	memset(dp, -1, sizeof(dp));
	cout << fun(0, 0);

	return 0;
}