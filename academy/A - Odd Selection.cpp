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
		int n, x; cin >> n >> x;
		int a[n];
		int odd = 0, even = 0;
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
			if (a[i] % 2)odd++;
			else even++;
		}

		int found = 0;
		for (int i = 1; i <= x; i += 2) {
			if (odd >= i && even >= x - i) {
				// cout << i << " " << n - i << endl;
				found = 1;
			}
		}
		if (found)cout << "Yes\n";
		else cout << "No\n";



	}

	return 0;
}