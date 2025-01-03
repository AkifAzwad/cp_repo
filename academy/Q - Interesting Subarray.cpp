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
		int l = 1, r = 1;
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		for (int i = 1; i < n; ++i) {
			if (abs(a[i - 1] - a[i]) > 1) {
				l = i; r = i + 1;
				break;
			}
		}
		if (l != r) {
			cout << "YES\n";
			cout << l << " " << r << endl;
		} else cout << "NO\n";
	}

	return 0;
}