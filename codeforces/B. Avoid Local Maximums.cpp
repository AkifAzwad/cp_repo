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
		int ans = 0;
		int mx = 1e9;
		for (int i = 1; i + 1 < n; ++i) {
			if (a[i] > a[i - 1] && a[i] > a[i + 1]) {
				ans++;
				int mx = a[i];
				if (i + 2 < n)mx = max(a[i], a[i + 2]);
				a[i + 1] = mx;
				// cout << i + 2 << " ";
			}
		}
		cout << ans << endl;
		for (int i = 0; i < n; ++i) {
			cout << a[i] << " ";
		}
		cout << "\n";
	}

	return 0;
}