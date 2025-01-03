#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;



/////////constants/////////
//const int mod = 1e9 + 7;
string x, y;
const int N = 5e3 + 100;
int dp[N][N];
//////////methods//////////
int fun(int i, int j) { //min operations to make x and y equal

	if (i == x.size() || j == y.size()) {
		int len1 = x.size();
		int len2 = y.size();
		if (i == x.size())return len2 - j;
		if (j == y.size())return len1 - i;
	}
	if (dp[i][j] != -1)return dp[i][j];
	int ans = 0;

	if (x[i] == y[j]) {
		ans = fun(i + 1, j + 1);
	} else {
		ans = fun(i + 1, j) + 1; // remove
		ans = min(ans, fun(i + 1, j + 1) + 1); // replace
		ans = min(ans, fun(i, j + 1) + 1); // add
	}

	return dp[i][j] = ans;
}


///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	memset(dp, -1, sizeof(dp));
	cin >> x >> y;
	cout << fun(0, 0);
	return 0;
}