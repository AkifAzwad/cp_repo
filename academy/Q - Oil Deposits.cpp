#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;



/////////constants/////////
//const int mod = 1e9 + 7;

const int N = 105;
int vis[N][N];
string grid[N];
//////////methods//////////

void dfs(int x, int y, int m, int n) {
	vis[x][y] = 1;

	if (x + 1 < m && grid[x + 1][y] == '@' && !vis[x + 1][y])dfs(x + 1, y, m, n);
	if (x - 1 >= 0 && grid[x - 1][y] == '@' && !vis[x - 1][y])dfs(x - 1, y, m, n);
	if (y + 1 < n && grid[x][y + 1] == '@' && !vis[x][y + 1])dfs(x, y + 1, m, n);
	if (y - 1 >= 0 && grid[x][y - 1] == '@' && !vis[x][y - 1])dfs(x, y - 1, m, n);

	if (x + 1 < m && y + 1 < n && grid[x + 1][y + 1] == '@'
	        && !vis[x + 1][y + 1])dfs(x + 1, y + 1, m, n);
	if (x - 1 >= 0 && y - 1 >= 0 && grid[x - 1][y - 1] == '@'
	        && !vis[x - 1][y - 1])dfs(x - 1, y - 1, m, n);
	if (x + 1 < m && y - 1 >= 0 && grid[x + 1][y - 1] == '@'
	        && !vis[x + 1][y - 1])dfs(x + 1, y - 1, m, n);
	if (x - 1 >= 0 && y + 1 < n && grid[x - 1][y + 1] == '@'
	        && !vis[x - 1][y + 1])dfs(x - 1, y + 1, m, n);
}

///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int m, n;

	while (1) {
		cin >> m >> n;
		if (m == 0)break;
		int cnt = 0;
		for (int i = 0; i < N; ++i) {
			for (int j = 0; j < N; ++j) {
				vis[i][j] = 0;
			}
		}
		for (int i = 0; i < m; ++i) {
			cin >> grid[i];
		}

		for (int i = 0; i < m; ++i) {
			for (int j = 0; j < n; ++j) {
				if (grid[i][j] == '@' && !vis[i][j]) {
					dfs(i, j, m, n);
					cnt++;
				}
			}
		}
		cout << cnt << endl;
	}

	return 0;
}