#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;



/////////constants/////////
const int mod = 1e9 + 7;
const int N = 1e6 + 100;
int n, x;
int a[110];
int dp[N];
//////////methods//////////
int fun(int sum) {
	if (sum < 0)return 0;
	if (sum == 0)return 1;
	if (dp[sum] != -1)return dp[sum];
	int ans = 0;
	for (int i = 0; i < n; ++i) {
		ans += fun(sum - a[i]);
		ans %= mod;
	}
	return dp[sum] = ans;
}


///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	memset(dp, -1, sizeof(dp));
	cin >> n >> x;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	cout << fun(x) << endl;

	return 0;
}