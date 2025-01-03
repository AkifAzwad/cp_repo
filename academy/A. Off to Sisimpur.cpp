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
		string s; cin >> s;
		int l = 0, r = n - 1;
		int found = 0;
		while (l < r) {
			if (s[l] != s[r]) {
				int dif = abs(s[r] - s[l]);
				// cout << s[r] << " " << s[l] << " " << dif << endl;
				if (dif != 2)found = 1;
			}
			l++, r--;
		}
		if (found)cout << "NO\n";
		else cout << "YES\n";
	}

	return 0;
}