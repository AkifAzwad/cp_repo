#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;
#define int ll

/////////constants/////////
//const int mod = 1e9 + 7;


//////////methods//////////


///////////////////////////
signed main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	// int n; cin >> n;
	// int a[n];
	// int mx = 3e3 + 5;
	// for (int i = 0; i < n; ++i) {
	// 	cin >> a[i];
	// 	a[i] += mx;
	// }
	// cout << n + 1 << endl;
	// cout << "1 " << n << " " << mx << endl;
	// for (int i = 0; i < n; ++i) {
	// 	cout << "2 " << i + 1 << " " << a[i] - i - 1 << endl;
	// }

	cout << min({min(2, 3), min(4, 6)});

	return 0;
}