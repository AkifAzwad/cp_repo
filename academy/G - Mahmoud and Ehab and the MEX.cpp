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

	int n, x; cin >> n >> x;
	int a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}


	sort(a, a + n);
	int cnt = 0;
	for (int i = 0; i < x; ++i) {
		if (!binary_search(a, a + n, i)) {
			cnt++;
			// cout << i << " ";
		}
	}
	if (binary_search(a, a + n, x)) {
		cnt++;
	}
	cout << cnt << "\n";

	return 0;
}