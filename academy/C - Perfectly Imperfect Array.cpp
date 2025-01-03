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
		int a[n];
		int found = 0;
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
			int rt = sqrt(a[i]);
			if (rt * rt != a[i])found = 1;
		}
		if (!found)cout << "NO\n";
		else cout << "YES\n";
	}

	return 0;
}