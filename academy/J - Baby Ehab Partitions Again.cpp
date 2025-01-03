#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;


/////////constants/////////
//const int mod = 1e9 + 7;
const int N = 100;
int a[N];
int n, mx;
int dp[105][200005];
//////////methods//////////
int fun(int pos, int sum) {
	if (sum < 0)return 0;
	if (sum == 0) {
		return 1;
	}
	if (pos == n)return 0;
	if (dp[pos][sum] != -1)return dp[pos][sum];
	int ans = fun(pos + 1, sum - a[pos]);
	ans = max(ans, fun(pos + 1, sum));
	return dp[pos][sum] = ans;
}

///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);


	cin >> n;
	int sum = 0;
	int odd = 0;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		sum += a[i];
	}

	if (sum % 2) {
		cout << "0";
		return 0;
	}

	mx = sum / 2;
	memset(dp, -1, sizeof dp);

	if (!fun(0, mx)) {
		cout << "0";
		return 0;
	}


	for (int i = 0; i < n; ++i) {
		if (a[i] % 2) {
			cout << "1\n";
			cout << i + 1;
			return 0;
		}
	}


	while (1) {
		for (int i = 0; i < n; ++i) {
			a[i] /= 2;
			if (a[i] % 2) {
				cout << "1\n";
				cout << i + 1;
				return 0;
			}
		}
	}

	return 0;
}