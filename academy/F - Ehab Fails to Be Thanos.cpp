#include "bits/stdc++.h"
using namespace std;

// #define int long long
/////////data types/////////
using ll = long long;


/////////constants/////////
//const int mod = 1e9 + 7;


//////////methods//////////


///////////////////////////
signed main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n; cin >> n;
	n *= 2;
	int a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	sort(a, a + n);

	int sum1 = 0, sum2 = 0;
	for (int i = 0; i < n / 2; ++i) {
		sum1 += a[i];
	}
	for (int i = n / 2; i < n; ++i) {
		sum2 += a[i];
	}

	if (sum1 != sum2) {
		for (int i = 0; i < n; ++i) {
			cout << a[i] << " ";
		}
	} else cout << "-1";


	return 0;
}