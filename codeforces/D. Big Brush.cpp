#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;


/////////constants/////////
//const int mod = 1e9 + 7;
/////direction_array///////
#define valid(nx,ny) nx>=1 && nx<=row && ny>=1 && ny<=col
int fx1[] = { +1, -1, +0, +0}; //straight
int fy1[] = { +0, +0, +1, -1};



//////////methods//////////
int row, col, n, m;
std::vector<int> v[1005];
void cost(int x, int y) {

}
void color(int x, int y) {

}

///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> m;
	row = n; col = m;

	for (int i = 0; i <= n; ++i) {
		for (int j = 0; j <= m; ++j) {
			v[i].push_back(0);
		}
	}

	for (int i = 1; i <= n; ++i) {
		for (int j = 1; j <= m; ++j) {
			int x; cin >> x;
			v[i][j] = x;
		}
	}



	return 0;
}