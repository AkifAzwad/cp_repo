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
		string s;
		s.push_back('2');
		for (int i = 0; i < n - 1; ++i) {
			s += '3';
		}
		if (n == 1)cout << "-1\n";
		else cout << s << "\n";
	}

	return 0;
}