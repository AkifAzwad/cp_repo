#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;


/////////constants/////////
//const int mod = 1e9 + 7;


//////////methods//////////


///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, m; cin >> n >> m;
	int a[n], b[m];
	int odd1 = 0, odd2 = 0;
	int even1 = 0, even2 = 0;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		odd1 += (a[i] % 2);
	}
	for (int i = 0; i < m; ++i) {
		cin >> b[i];
		odd2 += (b[i] % 2);
	}

	even1 = n - odd1; even2 = m - odd2;
	int x, y;
	x = min(even1, odd2);
	y = min(even2, odd1);

	cout << x + y;

	return 0;
}