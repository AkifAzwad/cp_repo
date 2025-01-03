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
		int n, q; cin >> n >> q;
		int a[n + 5] = {0};

		for (int i = 1; i <= n; ++i) {
			cin >> a[i];
		}



		int cur = 0;
		for (int i = 1; i <= n; ++i) {
			if (a[i] != a[i - 1]) {
				cur++;
			}
		}




		// cout << cur << endl;

		while (q--)
		{
			int pos, val;
			cin >> pos >> val;
			if (a[pos] != a[pos - 1])cur--;
			if (pos + 1 <= n && a[pos] != a[pos + 1])cur--;
			a[pos] = val;
			if (a[pos] != a[pos - 1])cur++;
			if (pos + 1 <= n && a[pos] != a[pos + 1])cur++;
			cout << cur << "\n";
		}

	}

	return 0;
}