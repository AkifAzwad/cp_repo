#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;



/////////constants/////////
//const int mod = 1e9 + 7;
const int N = 1e3 + 10;
string s;
int dp[N][N];

//////////methods//////////
int fun(int i, int j) {
	// cout << i << " " << j << endl;
	if (i == s.size()) {
		return 0;
	}
	if (j == -1) {
		return 0;
	}
	if (dp[i][j] != -1)return dp[i][j];
	int ans = 0;
	if (i == j)ans = 1;
	else if (i == j - 1 && s[i] == s[j])ans = 2;
	else if (s[i] == s[j]) {
		ans = fun(i + 1, j - 1) + 2;
	}
	else {
		ans = max(fun(i + 1, j), fun(i, j - 1));
	}
	// cout << i << " " << j << " " << ans << endl;
	return dp[i][j] = ans;
}


///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;
	getline(cin, s);
	while (t--) {
		memset(dp, -1, sizeof dp);
		getline(cin, s);
		// cout << s.size() << endl;
		cout << fun(0, s.size() - 1) << endl;
	}




	return 0;
}