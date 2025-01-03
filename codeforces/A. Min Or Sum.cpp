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
		int a[n];
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}

		sort(a, a + n);
		ll sum = 0;
		for (int i = 0; i < n; ++i) {
			sum |= a[i];
		}
		cout << sum << endl;

	}

	return 0;
}