#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;



/////////constants/////////
//const int mod = 1e9 + 7;
const int N = 1e5 + 9;
int a[N], d[N], ans[N];


//////////methods//////////



///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, q; cin >> n >> q;
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
	}

	while (q--) {
		int l, r, x;
		cin >> l >> r >> x;
		d[l] += x; d[r + 1] -= x;
	}

	for (int i = 1; i <= n; ++i) {
		ans[i] = ans[i - 1] + d[i];
		cout << ans[i] + a[i] << " ";
	}


	return 0;
}