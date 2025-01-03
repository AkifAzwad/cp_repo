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
		int n, q; cin >> n >> q;
		string s; cin >> s;
		while (q--) {
			int l, r; cin >> l >> r;
			int len = r - l + 1;
			string temp = s.substr(l - 1, len);

			int i = l - 2, j = r;
			char x = temp[0], y = temp[len - 1];
			int found = 0;

			while (i >= 0 || j < n) {

				if (i >= 0 && s[i] == x) {
					found = 1;
				}
				if (j < n && s[j] == y) {
					found = 1;
				}
				i--;
				j++;
				// cout << i << " " << j << " " << found << endl;
			}
			// cout << temp << " ";
			if (found)cout << "YES\n";
			else cout << "NO\n";
		}
	}

	return 0;
}