#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;
#define valid(nx,ny) nx>=0 && nx<row && ny>=0 && ny<col


/////direction_array///////
int fx1[] = { +1, -1, +0, +0}; //straight
int fy1[] = { +0, +0, +1, -1};
int fx2[] = { +0, +0, +1, -1, -1, +1, -1, +1}; //and diagonally
int fy2[] = { -1, +1, +0, +0, +1, +1, -1, -1};


/////////constants/////////
//const int mod = 1e9 + 7;
const int N = 1e3 + 100;
string s[N];
int row, col;
int vis[N][N];
//////////methods//////////
void dfs(int x, int y) {
	vis[x][y] = 1;
	for (int i = 0; i < 4; ++i) {
		int nx, ny;
		nx = x + fx1[i]; ny = y + fy1[i];
		if (valid(nx, ny)) {
			if (!vis[nx][ny] && s[nx][ny] != '#')dfs(nx, ny);
		}
	}
}


///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> row >> col;
	for (int i = 0; i < row; ++i) {
		cin >> s[i];
	}

	int ans = 0;

	for (int i = 0; i < row; ++i) {
		for (int j = 0; j < col; ++j) {
			if (!vis[i][j] && s[i][j] != '#') {
				ans++;
				dfs(i, j);
			}
		}
	}

	cout << ans << endl;

	return 0;
}