#include "bits/stdc++.h"
using namespace std;

// #define int long long
/////////data types/////////
using ll = long long;


/////////constants/////////
//const int mod = 1e9 + 7;
const int N = 100;
int dp[N];
//////////methods//////////
int n;
int f(int val) {
	// cout << val << endl;
	if (val == n)return 1;
	if (dp[val] != -1)return dp[val];
	// if (val > n)return 0;
	int ans = 0;
	if (val + 2 <= n)ans += f(val + 2);
	else ans++;
	if (val + 3 <= n)ans += f(val + 3) ;
	else ans++;
	return dp[val] = ans;
}

///////////////////////////
signed main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);


	while (cin >> n) {
		memset(dp, -1, sizeof dp);
		cout << f(1)  << endl;
	}

	return 0;
}