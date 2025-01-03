#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;



/////////constants/////////
//const int mod = 1e9 + 7;
const int N = 3100;
string x, s;
int dp[N][N];
//////////methods//////////
int fun(int i, int j) {
	if (i >= s.size() || j >= x.size()) {
		return 0;
	}
	if (dp[i][j] != -1)return dp[i][j];
	int ans = 0;
	if (s[i] == x[j]) {
		ans = 1 + fun(i + 1, j + 1);
	} else {
		ans = max(fun(i + 1, j), fun(i, j + 1));
	}
	return dp[i][j] = ans;
}

void print(int i, int j) {
	if (i >= s.size() || j >= x.size())return;
	if (s[i] == x[j]) {
		cout << s[i];
		print(i + 1, j + 1);
		return;
	}
	int x = fun(i + 1, j);
	int y = fun(i, j + 1);
	if (x >= y) {
		print(i + 1, j);
	} else print(i, j + 1);
}


///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	memset(dp, -1, sizeof (dp));
	cin >> s >> x;
	print(0, 0);

	return 0;
}