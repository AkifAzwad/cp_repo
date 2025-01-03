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
		string s; cin >> s;
		int n = s.size();
		int len = (n / 2);
		if (n % 2) {
			cout << "NO\n";
		} else {
			int found = 0;
			// cout << len << endl;
			for (int i = 0; i < len; ++i) {
				if (s[i] != s[i + len])found = 1;
			}
			if (found)cout << "NO\n";
			else cout << "YES\n";
		}
	}

	return 0;
}