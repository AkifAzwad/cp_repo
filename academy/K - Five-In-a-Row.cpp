#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;


/////////constants/////////
//const int mod = 1e9 + 7;


//////////methods//////////
/////direction_array///////
#define valid(nx,ny) nx>=0 && nx<=9 && ny>=0 && ny<=9

int fx2[] = { +0, +0, +1, -1, -1, +1, -1, +1}; //and diagonally
int fy2[] = { -1, +1, +0, +0, +1, -1, -1, +1};

string s[20];
int fun(int x, int y) {

	int ans = 0;
	// ans = fun(x - 1, y, cur + 1) + fun(x + 1, y, cur + 1);
	// ans = max(ans, fun(x, y - 1, cur + 1) + fun(x, y + 1, cur + 1));
	for (int i = 0; i + 1 < 8; i += 2) {
		int dx = fx2[i], dy = fy2[i];
		int x1 = x, y1 = y;
		int cur = 0, len = 0;
		while (1) {
			x1 += dx; y1 += dy;
			int val = valid(x1, y1);
			if (!val || s[x1][y1] != 'X')break;
			len++;
		}
		cur = len;
		// cout << cur << " ";

		dx = fx2[i + 1], dy = fy2[i + 1];
		x1 = x, y1 = y;
		len = 0;
		while (1) {
			x1 += dx; y1 += dy;
			int val = valid(x1, y1);
			if (!val || s[x1][y1] != 'X')break;
			len++;
		}
		cur += len;
		// cout << cur << endl;
		ans = max(ans, cur);
	}

	// ans = max(ans, fun(x - 1, y - 1, cur + 1) + fun(x + 1, y + 1, cur + 1));
	// ans = max(ans, fun(x - 1, y + 1, cur + 1) + fun(x + 1, y - 1, cur + 1));
	return ans;
}


///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);


	for (int i = 0; i < 10; ++i) {
		cin >> s[i];
	}

	for (int i = 0; i < 10; ++i) {
		for (int j = 0; j < 10; ++j) {
			if (s[i][j] == '.') {
				// cout << endl;
				int cur = fun(i, j);
				// cout << cur << endl;;;
				if (cur >= 4) {
					// cout << i << " " << j << endl;
					cout << "YES";
					return 0;
				}
			}
		}
	}
	cout << "NO";

	return 0;
}