#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;



/////////constants/////////
//const int mod = 1e9 + 7;
const int N = 300;
ll a[N], b[N];
int n, m, d;
int q;
ll dp[N][30][30];
//////////methods//////////
ll fun(int pos, int cnt, int sum) { //knapsack to find if this group is divisible
	if (pos == n + 1)return 0;
	if (cnt == m) {
		// cout << pos << " " << cnt << " " << sum << endl;
		if (sum % d == 0)return 1;
		else return 0;
	}
	if (dp[pos][cnt][sum] != -1)return dp[pos][cnt][sum];
	ll ans = 0;
	ans += fun(pos + 1, cnt, sum % d); //if we dont take this
	ans += fun(pos + 1, cnt + 1, (sum + a[pos]) % d); //if we take this
	return dp[pos][cnt][sum] = ans;
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
		cin >> n >> q;
		for (int i = 0; i < n; ++i) {
			cin >> b[i];
		}

		// Case 1:
		cout << "Case " << turn++ << ":\n";
		while (q--) {
			cin >> d >> m;
			memset(a, 0, sizeof(a));
			memset(dp, -1, sizeof(dp));
			for (int i = 0; i < n; ++i) {
				int temp = b[i] % d;
				if (temp < 0)temp += d;
				a[i] = temp;
				// cout << a[i] << " ";
			}
			// cout << endl;
			cout << fun(0, 0, 0) << endl;
		}
	}



	return 0;
}