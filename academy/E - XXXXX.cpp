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
		int n, x; cin >> n >> x;
		int a[n];
		int sum = 0;
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
			a[i] %= x;
			sum += a[i];
		}

		int cnt = n;
		int found1 = 0, found2 = 0;
		int cnt1 = n, cnt2 = n;
		if (sum % x == 0) {
			int i = 0, j = n - 1;
			while (i < n) {
				if (!found1 && a[i] != 0) {
					found1 = 1;
					cnt1--;
				} else if (!found1) {
					cnt1--;
				}
				if (!found2 && a[j] != 0) {
					found2 = 1;
					cnt2--;
				} else if (!found2) {
					cnt2--;
				}
				i++; j--;
			}
			cnt = max(cnt1, cnt2);
			if (cnt)cout << cnt << endl;
			else cout << "-1\n";
		}
		else cout << cnt << endl;

	}

	return 0;
}