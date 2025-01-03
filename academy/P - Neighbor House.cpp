#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;



/////////constants/////////
//const int mod = 1e9 + 7;
const int N = 1e5 + 100;
int a[N][3];
int n;
int dp[N][3];
//////////methods//////////
int happy(int i, int j) { //max happiness for this position
	if (i == n) {
		// cout << i << " " << j << endl;
		return 0;
	}
	if (j != -1 && dp[i][j] != -1)return dp[i][j];

	int mx = 2e5;
	j = j % 3;
	int pos = j;
	for (int j = 0; j < 3; ++j) {
		// cout << i << " " << j << " " << a[i][j] << endl;
		if (pos != j)mx = min(mx, a[i][j] + happy(i + 1, j));

	}
	// cout << mx << endl << endl;
	if (pos == -1)pos = 0;
	return dp[i][pos] = mx;
}


///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	int turn = 1;
	while (t--) {
		cin >> n;
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < 3; ++j) {
				cin >> a[i][j];
			}
		}
		memset(dp, -1, sizeof(dp));
		// Case 1: 137
		cout << "Case " << turn++ << ": ";
		cout << happy(0, -1) << endl;

	}


	return 0;
}