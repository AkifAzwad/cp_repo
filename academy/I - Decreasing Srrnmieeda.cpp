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

	int t; cin >> t;
	while (t--) {
		int l, r; cin >> l >> r;
		// cout << r - l + 1 << endl;
		if (l < r - l + 1)cout << "-1\n";
		else cout << r << endl;
	}

	return 0;
}