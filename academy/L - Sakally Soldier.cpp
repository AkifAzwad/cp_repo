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

	freopen("alimagde.in", "r", stdin);

	int t; cin >> t;
	while (t--) {
		int mx;
		cin >> mx;
		int num = 1, ans = 0, last = 1;
		int i;
		for (i = 1; i <= mx; i += num) {
			ans += max(0, min(i, mx) - last - 1);
			last = i;
			num++;
		}
		ans += mx - last;
		cout << ans << endl;

	}
	return 0;
}