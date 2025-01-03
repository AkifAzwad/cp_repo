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
		int a[n], b[n];
		int sum = 0;
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
			b[i] = a[i];
			sum += a[i];
		}

		if (sum) {
			std::vector<int> ans1, ans2;
			int pre1 = 0, pre2 = 0;
			int found1 = 0, found2 = 0;
			sort(a, a + n); sort(b, b + n, greater<int>());
			for (int i = 0; i < n; ++i) {
				pre1 += a[i];
				pre2 += b[i];
				if (!pre1)found1 = 1;
				if (!pre2)found2 = 1;
			}

			// cout << found1 << " " << found2 << endl;
			if (!found1) {
				cout << "YES\n";
				for (int i = 0; i < n; ++i) {
					cout << a[i] << " ";
				}
				cout << endl;

			} else if (!found2) {
				cout << "YES\n";
				for (int i = 0; i < n; ++i) {
					cout << b[i] << " ";
				}
				cout << endl;

			} else cout << "NO\n";


		} else {
			cout << "NO\n";
		}


	}

	return 0;
}