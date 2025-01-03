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

		int mx = 0, ans = 0;
		set <int> s;
		for (int i = 0; i < n; ++i) {
			if (a[i] > mx) {
				s.insert(mx);
				mx = a[i]; ans++;
			} else {
				while (1) {
					if (s.empty())break;
					auto it = s.upper_bound(a[i]);
					if (*it != mx && *it > a[i]) {
						// cout << *it << endl;
						ans--;
						ans = max(ans, 1);
						s.erase(*it);
					} else break;
				}
			}
		}
		cout << max(ans, 1) << endl;

	}

	return 0;
}