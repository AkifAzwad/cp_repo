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
	int mx = 0;
	for (int i = 0; i < n; ++i) {
		int mn = 1e9;
		for (int j = 0; j < m; ++j) {
			int x; cin >> x;
			mn = min(mn, x);
		}
		mx = max(mx, mn);
	}

	cout << mx << endl;

	return 0;
}