#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;



/////////constants/////////
//const int mod = 1e9 + 7;
const int N = 1e3 + 100;
int a[N];
int n;
int dp[N];

//////////methods//////////
int fun(int pos) {
	if (pos >= n) {
		// cout << pos + 1 << " " << a[pos] << " end " << sum << endl;
		return 0;
	}
	if (dp[pos] != -1)return dp[pos];
	int j = 2;
	int ans = 0;
	for (int i = pos; i < n; ++i) {
		int temp = (pos + j + 1) % (n - 1);
		// cout << i + 1 << " " << pos + j + 1 << " " << abs(temp - i) << endl;
		if (abs(temp - i) != 1 || pos + j >= n)ans = max(ans, fun(pos + j) + a[i]);
		j++;
		// cout << "pos " << pos + 1 << " " << ans << endl << endl;
	}
	// cout << endl;
	return dp[pos] = ans;
}


///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	int turn = 1;
	while (t--) {
		memset(a, 0, sizeof(a));
		memset(dp, -1, sizeof(dp));
		cin >> n;
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		// Case 1: 100
		cout << "Case " << turn++ << ": ";
		cout << fun(0) << endl;
	}


	return 0;
}