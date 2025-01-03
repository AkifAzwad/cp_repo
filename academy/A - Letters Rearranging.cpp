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
		string x, s; cin >> s;
		sort(s.begin(), s.end());
		x = s;
		reverse(x.begin(), x.end());
		if (x == s)cout << "-1\n";
		else cout << s << endl;
	}

	return 0;
}