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
		std::vector<int> v(n);
		int a[n];
		for (int i = 0; i < n; ++i) {
			cin >> v[i];
			a[i] = v[i];
		}
		sort(a, a + n);
		for (int i = 0; i < n; ++i) {
			if (v[i] != a[i]) {
				// cout << i << endl;
				for (int j = i; j < n; ++j) {
					if (v[j] == a[i]) {
						int l, r;
						l = i; r = j;
						// cout << l << " " << r << endl;
						reverse(v.begin() + l, v.begin() + r + 1);
						break;
					}
				}
				break;
			}
		}

		for (auto p : v) {
			cout << p << " ";
		} cout << endl;


	}

	return 0;
}