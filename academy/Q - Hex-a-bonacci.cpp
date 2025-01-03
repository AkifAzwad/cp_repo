#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;



/////////constants/////////
const int mod = 1e7 + 7;
const int N = 1e4 + 100;
int dp[N];
int a[N];
//////////methods//////////
int fn(int n) { //how many ways n can be formed
	if (n < 0)return 0;
	if (n <= 5)return a[n] % mod;
	if (dp[n] != -1)return dp[n] % mod;
	ll ans = 0;
	for (int i = 1; i <= 6; ++i) {
		ans += fn(n - i);
		ans %= mod;
	}
	return dp[n] = ans;
}


///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, cases; cin >> cases;
	for (int i = 1; i <= cases; ++i) {

		memset(dp, -1, sizeof(dp));
		memset(a, 0, sizeof(a));

		for (int j = 0; j <= 5; ++j) {
			cin >> a[j];
		}
		cin >> n;
		ll ans = fn(n);
		// Case 1: 216339
		cout << "Case " << i << ": ";
		cout << ans << endl;

	}

	return 0;
}