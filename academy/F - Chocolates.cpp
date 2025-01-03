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

	int n; cin >> n;
	int a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	int mx = 1e9 + 1;
	ll ans = 0;
	for (int i = n - 1; i > -1; --i) {
		// cout << mx - 1 << " " << a[i] << endl;
		int num = max(0, min(mx - 1, a[i]));
		ans += num;
		mx = num;
	}
	cout << ans << endl;

	return 0;
}