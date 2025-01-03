#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;



/////////constants/////////
const int mod = 100000007;
const int N = 1e3 + 100;
int a[N], b[N];
int dp[N][60];
int n, k;
//////////methods//////////
int fun(int sum, int pos) {
	if (sum < 0)return 0;
	if (sum == 0)return 1;
	if (pos == n)return 0;
	if (dp[sum][pos] != -1)return dp[sum][pos];
	int ans = 0;

	for (int j = 0; j <= b[pos]; ++j) {
		// cout << j << endl;
		// cout << sum - j * a[pos] << endl;
		ans += fun(sum - j * a[pos], pos + 1);
		ans %= mod;
	}

	return dp[sum][pos] = ans;
}


///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	int turn = 1;
	while (t--) {
		memset(dp, -1, sizeof(dp));
		memset(a, -1, sizeof(a));
		memset(b, -1, sizeof(b));
		cin >> n >> k;
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		for (int i = 0; i < n; ++i) {
			cin >> b[i];
		}
		int last = -1;
		// Case 1: 3
		cout << "Case " << turn++ << ": ";
		cout << fun(k, 0) << endl;
	}

	return 0;
}