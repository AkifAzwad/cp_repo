#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;


/////////constants/////////
//const int mod = 1e9 + 7;
/////direction_array///////
int row, col;
#define valid(nx,ny) nx>=1 && nx<=row && ny>=1 && ny<=col
int grid[105][105];
int sz;
//////////methods//////////
int dfs(int x, int y) {
	int val = grid[x][y];
	if (valid(x + 1, y))val += grid[x + 1][y];
	if (valid(x, y + 1))val += grid[x][y + 1];
	if (valid(x + 1, y + 1))val += grid[x + 1][y + 1];
	// cout << val << endl;
	return val;
}


///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {

		int n, m; cin >> n >> m;
		row = n; col = m;
		string s[n];
		for (int i = 0; i < n; ++i) {
			cin >> s[i];
		}
		for (int i = 1; i <= n; ++i) {
			for (int j = 1; j <= m; ++j) {
				grid[i][j] = s[i - 1][j - 1] - '0';
			}
		}
		int found = 0;
		for (int i = 1; i <= n; ++i) {
			for (int j = 1; j <= m; ++j) {

				sz = 0;
				sz = dfs(i, j);
				if (sz == 3)found = 1;

			}
		}
		// cout << n << m << endl;
		if (found)cout << "NO\n";
		else cout << "YES\n";

	}

	return 0;
}