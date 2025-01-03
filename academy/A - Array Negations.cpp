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
		int sum = 0, cnt = 0;
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		sort(a, a + n);
		for (int i = 0; i < n && k; ++i) {
			if (a[i] < 0)a[i] *= -1, k--;
		}
		sort(a, a + n);
		// cout << (k % 2) << endl;
		for (int i = 0; i < n; ++i) {
			// cout << a[i] << " ";
			sum += a[i];
		}
		if (k % 2)sum -= 2 * a[0];

		cout << sum << "\n";
	}

	return 0;
}