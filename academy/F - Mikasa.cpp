#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;


/////////constants/////////
//const int mod = 1e9 + 7;


//////////methods//////////
int lsb(int n, int m) {

	for (int j = 0; j < 30; ++j) {
		// cout << m << " " << (1 << j) << " " << (m & (1 << j)) << endl;
		int x = (m & (1 << j));
		if (x == 0 ) {
			return (1 << j);
		}
		// ans *= 2;
	}
	return 0;
}

///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		int n, m; cin >> n >> m;

		cout << ( n ^ (m | lsb(n, m))) << endl;
	}

	cout << lsb(2, 5);

	return 0;
}