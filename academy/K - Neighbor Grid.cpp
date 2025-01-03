#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;
/////direction_array///////
int n, m;
#define valid(nx,ny) nx>=0 && nx<=n-1 && ny>=0 && ny<=m-1
int fx1[] = { +1, -1, +0, +0}; //straight
int fy1[] = { +0, +0, +1, -1};


/////////constants/////////
//const int mod = 1e9 + 7;
const int N = 305;
int grid[N][N];

//////////methods//////////

int check(int x, int y) {
	int cnt = 0;
	for (int i = 0; i < 4; ++i) {
		int dx, dy;
		dx = x + fx1[i]; dy = y + fy1[i];
		if (valid(dx, dy)) {
			cnt++;
		}
	}
	return cnt;
}
///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		memset(grid, 0, sizeof grid);
		cin >> n >> m;
		int found = 0;
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				cin >> grid[i][j];
			}
		}
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				int val = check(i, j);
				if (val < grid[i][j]) {
					found = 1;
				} else grid[i][j] = val;
			}
		}
		if (!found) {
			cout << "YES\n";
			for (int i = 0; i < n; ++i) {
				for (int j = 0; j < m; ++j) {
					cout << grid[i][j] << " ";
				} cout << endl;
			}
		} else cout << "NO\n";


	}

	return 0;
}