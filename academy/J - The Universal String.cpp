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
		char ch = s[0];
		int found = 0;

		for (int i = 0; i < n; ++i) {

			if (ch != s[i]) {
				found = 1;
				break;
			}
			ch++;
			if (ch > 'z')ch = 'a';
		}
		if (found)cout << "NO\n";
		else cout << "YES\n";
	}

	return 0;
}