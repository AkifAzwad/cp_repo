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
		if (n % 2) {
			int found = 0;
			int mx = 0;
			for (int i = 0; i < n; ++i) {
				if (mx >= a[i])found = 1;
				mx = max(mx, a[i]);
			}
			if (found)cout << "YES\n";
			else cout << "NO\n";
		} else cout << "YES\n";
	}

	return 0;
}