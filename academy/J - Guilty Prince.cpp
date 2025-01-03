#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;



/////////constants/////////
//const int mod = 1e9 + 7;
const int N = 105;
// int grid[N][N];
int vis[N][N];
string s[N];
//////////methods//////////

void dfs(int x, int y, int row, int col) {
	// cout << x << " " << y << endl;
	vis[x][y] = 1;
	if (x + 1 < row && !vis[x + 1][y]
	        && s[x + 1][y] == '.')dfs(x + 1, y, row, col);
	if (y + 1 < col && !vis[x][y + 1]
	        && s[x][y + 1] == '.')dfs(x, y + 1, row, col);
	if (x - 1 >= 0 && !vis[x - 1][y]
	        && s[x - 1][y] == '.')dfs(x - 1, y, row, col);
	if (y - 1 >= 0 && !vis[x][y - 1]
	        && s[x][y - 1] == '.')dfs(x, y - 1, row, col);
}

///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	int turn = 1;
	while (t--) {
		for (int i = 0; i < N; ++i) {
			s[i] = "";
			for (int j = 0; j < N; ++j) {
				vis[i][j] = 0;
			}
		}
		int row, col; cin >> col >> row;
		// string s[row];
		for (int i = 0; i < row; ++i) {
			cin >> s[i];
			// cout << s[i] << endl;
		}

		for (int i = 0; i < row; ++i) {
			for (int j = 0; j < col; ++j) {
				if (s[i][j] == '@') {
					// cout << i << " " << j << endl;
					// cout << s[i][j + 1] << endl;
					dfs(i, j, row, col);
					break;
				}
			}
		}

		int ans = 0;
		for (int i = 0; i < row; ++i) {
			for (int j = 0; j < col; ++j) {
				if (vis[i][j] && s[i][j] == '.')ans++;
			}
		}
		// Case 1: 45
		cout << "Case " << turn++ << ": ";
		cout << ans + 1 << endl;
	}

	return 0;
}