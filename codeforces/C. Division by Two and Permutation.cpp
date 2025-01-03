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
		int found = 0;
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		int cnt[n + 1] = {0};
		for (int i = 0; i < n; ++i) {
			int x = a[i];
			while (x > 0) {
				if (x <= n)cnt[x]++;
				x /= 2;
			}
		}

		for (int i = n; i > 0; --i) {
			if (cnt[i]) {
				// cout << i << " " << cnt[i] << endl;
				int x = i;
				while (x > 0) {
					cnt[x]--;
					x /= 2;
				}
			}
			else found = 1;
		}


		if (found)cout << "NO\n";
		else cout << "YES\n";

	}



	return 0;
}