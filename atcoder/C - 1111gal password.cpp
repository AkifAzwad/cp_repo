#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;


/////////constants/////////
const int mod = 998244353;
const int N = 1e6 + 9;
int dp[20][N];

//////////methods//////////
int n;
int cnt;
int fun(int num, int pos) {
	if (num < 1 || num > 2) {
		return 0;
	}

	if (pos == 0) {
		return 1;
	}
	cout << pos << " " << num << endl;
	if (dp[num][pos] != -1)return dp[num][pos];
	int cur = 0;
	for (int i = num; i <= 2; ++i) {
		cur += fun(i + 1, pos - 1);
		cur %= mod;
		cur += fun(i + 0, pos - 1);
		cur %= mod;
		cur += fun(i - 1, pos - 1);
		cur %= mod;
	}

	return dp[num][pos] = cur;
}

///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	memset(dp, -1, sizeof dp);
	// fun(1, 1);
	cout << fun(1, n - 1) << endl;
	return 0;
}