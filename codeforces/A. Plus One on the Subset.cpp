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

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		ll a[n];
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}


		ll sum = 0;

		sort(a, a + n);
		int pos = n - 1;
		int last = 0;
		for (int i = 0; i < n - 1; ++i) {
			// cout << a[i] << " ";
			int dif = a[n - 1] - (a[pos - 1] + last);
			sum += max(dif, 0);
			pos--;
			last += max(dif, 0);
		}
		// cout << endl;
		cout << sum << endl;
	}


	return 0;
}