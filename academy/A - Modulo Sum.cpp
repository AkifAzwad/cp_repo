#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;



/////////constants/////////
//const int mod = 1e9 + 7;
const int N = 1e3 + 100;
const int sz = 1e6 + 9;
int a[sz];
int dp[N][N][2];
int n, m;
//////////methods//////////
int fun(int i, int sum, int check) {
	sum = sum % m;
	if (i == n) {
		// cout << i << " " << sum << " " << check << endl;
		if (sum % m == 0 && check)return 1;
		else return 0;
	}
	if (dp[i][sum][check] != -1)return dp[i][sum][check];
	int ans = 0;
	ans = max(fun(i + 1, sum + a[i], 1), fun(i + 1, sum, check));
	return dp[i][sum][check] = ans;
}


///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);


	memset(dp, -1, sizeof dp);
	cin >> n >> m;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	if (n >= m) {
		cout << "YES\n";
	}
	else {
		// cout << fun(0, 0, 0) << endl;
		if (fun(0, 0, 0))cout << "YES\n";
		else cout << "NO\n";
	}

	return 0;
}