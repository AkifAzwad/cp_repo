#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;



/////////constants/////////
const int mod = 1e9 + 7, N = 1e3 + 100;
string s[N];
int n;
int dp[N][N];
int h, w;
//////////methods//////////
int dfs(int x, int y) {
	if (x == h || y == w)return 0;
	if (s[x][y] == '#')return 0;
	if (x == h - 1 && y == w - 1)return 1;
	if (dp[x][y] != -1)return dp[x][y];
	int ans = 0;
	ans += dfs(x + 1, y);
	ans += dfs(x, y + 1);
	ans %= mod;

	return dp[x][y] = ans;
}


///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	memset(dp, -1, sizeof dp);
	cin >> h >> w;
	for (int i = 0; i < h; ++i) {
		cin >> s[i];
	}

	cout << dfs(0, 0);

	return 0;
}