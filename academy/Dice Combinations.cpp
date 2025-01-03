#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;



/////////constants/////////
const int mod = 1e9 + 7;
const int N = 1e6 + 100;
int dp[N];


//////////methods//////////
int ways(int n) {
	if (n < 0)return 0;
	if (n == 1 || n == 0)return 1;
	if (dp[n] != -1)return dp[n];
	int ans = 0;
	for (int i = 1; i <= 6; ++i) {
		ans += ways(n - i);
		ans %= mod;
	}
	return dp[n] = ans;
}


///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n; cin >> n;
	memset(dp, -1, sizeof(dp));
	cout << ways(n) << endl;

	return 0;
}