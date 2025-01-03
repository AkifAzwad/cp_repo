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
		int n, k; cin >> n >> k;
		int a[n];
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		sort(a, a + n);
		int num = a[0];
		int found = 0;
		for (int i = 0; i < n; ++i) {
			num &= a[i];
			// cout << num << endl;
			if (num < k)found = 1;
		}
		if (found)cout << "YES\n";
		else cout << "NO\n";
	}

	return 0;
}