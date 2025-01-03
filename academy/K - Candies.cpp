#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;



/////////constants/////////
const int mod = 1e9 + 7, N = 1e5 + 100;
int n, k;
int a[110];
int dp[110][N];

//////////methods//////////
int fun(int i, int sum) {
	if (sum < 0)return 0;
	if (i == n + 1)return 0;
	if (sum == 0)return 1;
	if (dp[i][sum] != -1)return dp[i][sum];
	int ans = 0;
	for (int j = 0; j <= a[i]; ++j) {
		// cout << i << " " << j << endl;
		ans += fun(i + 1, sum - j );
		ans %= mod;
	}
	return dp[i][sum] = ans;
}


///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	memset(dp, -1, sizeof(dp));
	cin >> n >> k;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	cout << fun(0, k);

	return 0;
}