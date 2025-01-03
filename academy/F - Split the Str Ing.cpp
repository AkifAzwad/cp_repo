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
		char ch = s.back();
		int found = 0;
		for (int i = 0; i < n - 1; ++i) {
			if (s[i] == ch)found = 1;
		}
		if (found)cout << "YES\n";
		else cout << "NO\n";

	}

	return 0;
}