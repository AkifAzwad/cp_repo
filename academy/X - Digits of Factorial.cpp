#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;
#define valid(nx,ny) nx>=1 && nx<=row && ny>=1 && ny<=col


/////direction_array///////
int fx1[] = { +1, -1, +0, +0}; //straight
int fy1[] = { +0, +0, +1, -1};
int fx2[] = { +0, +0, +1, -1, -1, +1, -1, +1}; //and diagonally
int fy2[] = { -1, +1, +0, +0, +1, +1, -1, -1};


/////////constants/////////
//const int mod = 1e9 + 7;
const int N = 1e6 + 10;
double logs[N];
//////////methods//////////


///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	for (int i = 1; i <= N; ++i) {
		logs[i] = logs[i - 1] + log10(i);
	}

	int t; cin >> t;
	int turn = 1;
	while (t--) {
		int x, b;
		cin >> x >> b;
		ll ans = (logs[x] / log10(b)) + 1;
		cout << "Case " << turn++ << ": ";
		cout << ans << endl;
	}

	return 0;
}