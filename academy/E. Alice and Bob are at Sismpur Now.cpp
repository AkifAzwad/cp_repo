#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;
/////direction_array///////
int row, col;
#define valid(nx,ny) nx>=1 && nx<=row && ny>=1 && ny<=col
int fx1[] = { +1, -1, +0, +0}; //straight
int fy1[] = { +0, +0, +1, -1};
int fx2[] = { +0, +0, +1, -1, -1, +1, -1, +1}; //and diagonally
int fy2[] = { -1, +1, +0, +0, +1, +1, -1, -1};


/////////constants/////////
//const int mod = 1e9 + 7;
const int N = 1e3 + 5;
int grid[N][N];
//////////methods//////////
void queen(int x, int y) {
	for (int i = 0; i < 8; ++i) {
		int dx, dy;
		dx = x; dy = y;
		while (1) {
			// cout << dx << " " << dy << endl;
			grid[dx][dy] = 1;
			dx = dx + fx2[i]; dy = dy + fy2[i];
			int val = valid(dx, dy);
			if (!val || grid[dx][dy])break;
		}
	}
}
void king(int x, int y) {
	if (grid[x][y] == 0)grid[x][y] = 2;
	else return;
	for (int i = 0; i < 8; ++i) {
		int dx, dy;
		dx = x + fx2[i]; dy = y + fy2[i];
		int val = valid(dx, dy);
		if (val && grid[dx][dy] != 1 && grid[dx][dy] != 2) {
			king(dx, dy);
		}
	}
}

///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n; cin >> n;
	row = n, col = n;
	std::pair<int, int> a, b, c;
	cin >> a.first >> a.second;
	cin >> b.first >> b.second;
	cin >> c.first >> c.second;



	queen(a.first, a.second);
	king(b.first, b.second);
	if (grid[c.first][c.second] == 2)cout << "YES";
	else cout << "NO";


	return 0;
}