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
		int n; cin >> n;
		n *= 2;
		int a[n];
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		sort(a, a + n);
		int pos = n / 2;
		// cout << pos << endl;
		cout << a[pos] - a[pos - 1] << endl;

	}

	return 0;
}