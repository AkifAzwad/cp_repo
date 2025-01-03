#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;



/////////constants/////////
const int mod = 1e9 + 7;
const int N = 1e5 + 100;
int h[N];
ll dp[N];
//////////methods//////////
int jump(int i) { //min cost to jump to pos
	if (i <= 1)return 0;
	if (dp[i] != -1)return dp[i];
	ll x = INT_MAX, y = INT_MAX;
	if (i - 1 > 0)x = jump(i - 1) + abs(h[i] - h[i - 1]);
	if (i - 2 > 0)y = jump(i - 2) + abs(h[i] - h[i - 2]);
	// cout << i << " " << x << " " << y << endl;
	return dp[i] = min(x, y);
}


///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n; cin >> n;
	for (int i = 1; i <= n; ++i) {
		cin >> h[i];
	}
	memset(dp, -1, sizeof(dp));
	cout << jump(n) << endl;


	return 0;
}