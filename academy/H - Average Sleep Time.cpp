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

	int n, k; cin >> n >> k;
	int a[n + 1];
	ll pre[n + 5] = {0};
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
		pre[i] = pre[i - 1] + a[i];
	}


	ll sum = 0;
	for (int i = 1 ; i <= n; ++i) {
		if (i <= k) sum += a[i];
		else sum += pre[i] - pre[i - k];
		// cout << sum << " " << i << " " << i - k << endl;;

	}

	double ans;
	ans = ((double)sum) / ((double)n - k + 1);
	// cout << sum << " " << n - k + 1 << endl;
	cout << fixed << setprecision(6) << ans << endl;

	return 0;
}