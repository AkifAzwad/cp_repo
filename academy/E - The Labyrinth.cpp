#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;


/////direction_array///////
int row, col;
#define valid(nx,ny) nx>=0 && nx<row && ny>=0 && ny<col
int fx1[] = { +1, -1, +0, +0}; //straight
int fy1[] = { +0, +0, +1, -1};
int fx2[] = { +0, +0, +1, -1, -1, +1, -1, +1}; //and diagonally
int fy2[] = { -1, +1, +0, +0, +1, +1, -1, -1};


/////////constants/////////
//const int mod = 1e9 + 7;
const int N = 1e3 + 5;
string grid[N];
int vis[N][N], grid_col[N][N];
int len, val;
//////////methods//////////
void dfs(int x, int y) {
	if (vis[x][y])return;
	if (grid[x][y] == '*')return;
	vis[x][y] = 1;
	len++;
	grid_col[x][y] = val;
	for (int i = 0; i < 4; ++i) {
		int dx = x + fx1[i];
		int dy = y + fy1[i];
		if (valid(dx, dy)) {
			dfs(dx, dy);
		}
	}

}

///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	cin >> n >> m;
	row = n; col = m;
	for (int i = 0; i < row; ++i) {
		cin >> grid[i];
	}


	std::map<int, int> colour;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			if (grid[i][j] == '.') {
				len = 0;
				val++;
				dfs(i, j);
				colour[val] = len;
			}
		}
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			if (grid[i][j] == '.') {
				cout << grid[i][j];
				continue;
			}
			set<int> cur;
			for (int k = 0; k < 4; ++k) {
				int dx = i + fx1[k];
				int dy = j + fy1[k];
				if (valid(dx, dy)) {
					cur.insert(grid_col[dx][dy]);
				}
			}
			ll ans = 1;
			for (auto p : cur) {
				ans += colour[p];
			}
			cout << ans % 10;

		} cout << endl;
	}



	return 0;
}