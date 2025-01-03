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


//////////methods//////////


///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		cout << n / 2 << endl;
	}

	return 0;
}