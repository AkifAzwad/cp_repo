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

	// int x;
	// cin >> x;
	// int last = 0;
	// while (x != 0) {
	// 	last = x % 10;
	// 	x /= 10;
	// }
	// last % 2 ? cout << "ODD" : cout << "EVEN";
	ll l1, r1, l2, r2;
	cin >> l1 >> r1 >> l2 >> r2;
	if (r1 * log10(l1) <= r2 * log10(l2))cout << "NO\n";
	else cout << "YES\n";

	return 0;
}