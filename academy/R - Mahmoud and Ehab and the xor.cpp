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

	int n, x; cin >> n >> x;
	if (n == 2 ) {
		if (x == 0)cout << "NO";
		else {
			cout << "YES\n";
			cout << "0 " << x << endl;
		}
		return 0;
	}
	if (n == 1) {
		cout << "YES\n";
		cout << x << endl;
		return 0;
	}
	cout << "YES\n";
	int pw = 1 << 17;
	int val = 0;
	for (int i = 1; i <= n - 3; ++i) {
		cout << i << " ";
		val ^= i;
	}
	if (x == val) {
		int y = pw ^ (2 * pw);
		cout << pw << " " << pw * 2 << " " << y << endl;
	} else {
		int y = pw ^ x ^ val;
		cout << "0 " << pw << " " << y << endl;
	}

	return 0;
}