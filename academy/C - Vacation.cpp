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

	int mx = 0;
	j = j % 3;
	int pos = j;
	for (int j = 0; j < 3; ++j) {
		// cout << i << " " << j << " " << a[i][j] << endl;
		if (pos != j)mx = max(mx, a[i][j] + happy(i + 1, j));

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

	cin >> n;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < 3; ++j) {
			cin >> a[i][j];
		}
	}

	memset(dp, -1, sizeof(dp));

	cout << happy(0, -1);

	return 0;
}