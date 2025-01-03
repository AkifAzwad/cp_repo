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
	ll ans = 0, cnt = 1;
	int zero = 0;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		if (a[i] < 0) {
			ans += abs(-1 - a[i]);
			cnt *= -1;
		} else {
			ans += abs(1 - a[i]);
			if (!a[i])zero = 1;
		}

	}
	if (cnt < 0 && !zero)ans += 2;
	cout << ans << endl;

	return 0;
}