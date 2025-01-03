#include "bits/stdc++.h"
using namespace std;

#define int long long
/////////data types/////////
using ll = long long;


/////////constants/////////
//const int mod = 1e9 + 7;


//////////methods//////////
int lcm(int a, int b) {
	return (a * b) / __gcd(a, b);
}

///////////////////////////
signed main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int a[n + 10];
		int found = 0;
		int g = 1;
		for (int i = 1; i <= n; ++i) {
			cin >> a[i];
			if (a[i] % (i + 1) == 0) {
				int check = 0;

				if (a[i] % g == 0)check = 1;

				if (check)found = 1;

			}
			g = lcm(g, i + 1);
		}
		// cout << "\n";
		if (!found)cout << "YES\n";
		else cout << "NO\n";

	}

	return 0;
}