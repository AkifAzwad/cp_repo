#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;
#define int ll

/////////constants/////////
//const int mod = 1e9 + 7;


//////////methods//////////


///////////////////////////
signed main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n; cin >> n;
	int a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	int last = 0;
	int ans = 0;
	int cur = 0;
	for (int i = 0; i < n; ++i) {
		// cur += last;
		ans += abs(cur - a[i]);
		cur = a[i];
	}
	cout << ans << endl;

	return 0;
}