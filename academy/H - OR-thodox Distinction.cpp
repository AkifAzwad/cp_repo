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
		ll a[n];
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		int found = 0;
		if (n > 60)found = 1;
		else {
			std::map<ll, int> map;
			for (int i = 0; i < n; ++i) {
				ll sum = 0;
				for (int j = i; j < n; ++j) {
					sum |= a[j];
					map[sum]++;
					if (map[sum] > 1)found = 1;
				}
			}
		}

		if (found)cout << "NO\n";
		else cout << "YES\n";

	}

	return 0;
}