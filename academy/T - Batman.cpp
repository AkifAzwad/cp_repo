#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;



/////////constants/////////
//const int mod = 1e9 + 7;
const int N = 60;
string a, b, c;
int dp[N][N][N];
//////////methods//////////
int fun(int i, int j, int k) {
	if (i >= a.size() || j >= b.size() || k >= c.size()) {
		return 0;
	}
	if (dp[i][j][k] != -1)return dp[i][j][k];
	int ans = 0;
	if (a[i] == b[j] && b[j] == c[k]) {
		ans = 1 + fun(i + 1, j + 1, k + 1);
	} else {
		ans = max(max(fun(i + 1, j, k), fun(i, j + 1, k)), fun(i, j, k + 1));
	}
	return dp[i][j][k] = ans;
	return ans;
}




///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t, turn = 1;
	cin >> t;
	while (t--) {
		memset(dp, -1, sizeof (dp));
		cin >> a >> b >> c;
		cout << "Case " << turn++ << ": ";
		cout << fun(0, 0, 0) << endl;;
	}



	return 0;
}