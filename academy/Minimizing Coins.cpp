#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;



/////////constants/////////
const int mod = 1e9 + 7;
const int N = 1e6 + 100;
int a[200];
int dp[N];
int n, x;

//////////methods//////////
int min_coins(int sum) { //min num of coins to form sum
	if (sum < 0) {
		// cout << sum << endl;
		return 9e6;
	}
	if (sum == 0)return 0;
	if (dp[sum] != -1)return dp[sum];
	for (int i = 0; i < n; ++i) {
		// if (sum == a[i])cout << sum << endl;
		if (sum == a[i])return 1;
	}
	int ans = INT_MAX;
	// cout << sum << endl;
	for (int i = 0; i < n; ++i) {
		// if (1)cout << sum << " " << sum - a[i] << endl;
		ans = min(ans, 1 + min_coins(sum - a[i]));
		// if (1)cout << sum << " " << sum - a[i] << " " << ans << endl;

	}
	return dp[sum] = ans;
}


///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> x;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	memset(dp, -1, sizeof(dp));
	int ans = min_coins(x);
	if (ans > 0 && ans <= 1e6)cout << ans << endl;
	else cout << "-1\n";

	return 0;
}