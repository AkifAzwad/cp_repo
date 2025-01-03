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
		int a[n + 5], found = 0;
		std::vector<std::pair<int, int> > v;
		for (int i = 1; i <= n; ++i) {
			cin >> a[i];
		}
		for (int i = 1; i < n; ++i) {
			if (a[i] > a[i + 1])found = 1;
		}


		if (!found) {
			cout << "0\n";
		}
		else if (a[n - 1] <= a[n]) {
			ll val = a[n - 1] - a[n];
			if (abs(val) < (ll)1e18) {
				if (val <= a[n - 1]) {
					cout << n - 2 << endl;
					for (int i = 1; i <= n - 2; ++i) {
						cout << i << " " << n - 1 << " " << n << endl;
					}
				} else {
					cout << "-1\n";
				}
			}
		} else cout << "-1\n";

	}

	return 0;
}