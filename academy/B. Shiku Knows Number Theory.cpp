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

	int n, x;
	cin >> n >> x;

	int pos = 1, ans = 0;
	for (int i = 1; i <= n; ++i) {
		if (x % pos == 0) {
			int cur = x / pos;
			int num = pos * cur;
			if (num <= pos * n)ans++;
			// cout << num << endl;
		}
		pos++;
	}
	cout << ans;


	return 0;
}