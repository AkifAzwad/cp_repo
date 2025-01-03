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
	ll a[n];
	ll last = 0;
	ll sum = 0, mx = -10001;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		if (a[i] % 2) {
			if (last == 0)last = abs(a[i]);
			else last = min(abs(a[i]), last);
		}
	}

	sort(a, a + n);
	for (int i = n - 1; i > -1; --i) {
		sum += a[i];
		if (sum % 2) {
			mx = max(mx, sum);
		} else {
			ll cur = sum - last;
			mx = max(mx, cur);
		}

	}
	cout << mx <<  endl;


	return 0;
}