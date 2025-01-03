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
	int a[n + 1];
	int dif[n + 1], mn[n + 1];
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
		dif[i] = i - a[i];
		mn[i] = 1e9;
	}

	int hi = 1e9;
	for (int i = n; i >= 1; --i) {
		mn[i] = min(hi, dif[i]);
		hi = mn[i];
	}

	int cnt = 1;
	for (int i = 1; i < n; ++i) {
		// cout << mn[i] << " ";
		if (i < mn[i + 1])cnt++;
	}
	cout << cnt << endl;

	return 0;
}