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
		int a[n + 1];
		for (int i = 1; i <= n; ++i) {
			cin >> a[i];
		}

		int ans = n - 1;
		int l = 1, r = n;
		for (int i = 1; i <= n; ++i) {
			if (a[i] == 0) {
				l = i - 1;
				break;
			}
		}
		for (int i = n; i >= 1; --i) {
			if (a[i] == 0) {
				r = i + 1;
				break;
			}
		}
		if (r == n && l == 1) {
			int found = 0;
			for (int i = 1; i <= n; ++i) {
				if (!a[i]) {
					found = 1;
				}
			}
			if (!found)r = 0, l = 0;
		}
		cout << min(r - l, n - 1) << endl;

	}

	return 0;
}