#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;


/////////constants/////////
//const int mod = 1e9 + 7;
const int N = 1001;
vector<int> d(N, N);
int dp[1100][20000];
int n, k;
int b[1100], c[1100];
//////////methods//////////
int fun(int i, int w) {
	if (i == n) {
		return 0;
	}
	if (dp[i][w] != -1)return dp[i][w];
	int ans = fun(i + 1, w);
	// cout << b[i] << " " << d[b[i]] << " " << c[i] << endl;
	if (w + d[b[i]] <= k)ans = max(ans, fun(i + 1, w + d[b[i]]) + c[i]);
	return dp[i][w] = ans;
}

///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);



	int N = 1001;
	d[1] = 0;
	for (int i = 1; i < N; ++i) {
		for (int x = 1; x <= i; ++x) {
			int j = i + i / x;
			if (j < N) d[j] = min(d[j], d[i] + 1);
		}
		// if (i < 10)cout << d[i] << endl;
	}



	int t; cin >> t;
	while (t--) {
		memset(dp, -1, sizeof dp);
		cin >> n >> k;
		for (int i = 0; i < n; ++i) {
			cin >> b[i];
		}

		for (int i = 0; i < n; ++i) {
			cin >> c[i];

		}

		cout << fun(0, 0) << endl;


	}


	return 0;
}