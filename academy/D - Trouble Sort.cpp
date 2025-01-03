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
		int a[n], b[n];
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		int zero = 0, one = 0;
		for (int i = 0; i < n; ++i) {
			cin >> b[i];
			if (b[i] % 2)zero++;
			else one++;
		}

		int found = 0;
		for (int i = 1; i < n; ++i) {
			if (a[i] < a[i - 1])found = 1;
		}

		if (zero && one || !found)cout << "Yes\n";
		else cout << "No\n";

	}

	return 0;
}