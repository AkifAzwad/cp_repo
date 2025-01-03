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
		std::vector<int> u, e;
		int a[n + 1];
		int found = 0;
		for (int i = 1; i <= n; ++i) {
			int x; cin >> x;
			a[i] = x;
			if (x % (i + 1)) {
				u.push_back(i);
			} else e.push_back(i);
		}

		int cur = 0;
		for (int i = e.size() - 1; i > -1; --i) {
			int last = e[i];
			e[i] -= cur;
			if (!u.empty()) {
				while (u.back() > e[i]) {
					u.pop_back();
					if (u.empty())break;
				}
			}
			if (!u.empty()) {
				if ( e[i] % last == 0) {
					int pos = e[i];
					while (a[pos] % (e[i] + 1) == 0) {
						u.pop_back();
						cur++;
						e[i]--;
						// cout << e[i] << endl;
						if (u.empty()) {
							if (a[pos] % (e[i] + 1) == 0) {
								found = 1;
							}
							break;
						}
					}
				}
			} else found = 1;

		}

		if (found)cout << "NO\n";
		else cout << "YES\n";


	}

	return 0;
}