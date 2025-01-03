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

	freopen("max-pair.in", "r", stdin);

	int t; cin >> t;
	while (t--) {
		string s; cin >> s;
		int n = s.size();
		int cnt1 = 0, cnt2 = 0;
		for (int i = 0; i < n; ++i) {
			if (s[0] != s[i])cnt1 = i + 1;
		}
		for (int i = n - 1; i > -1; --i) {
			if (s[n - 1] != s[i])cnt2 = i + 1;
		}

		cout << max(cnt1 - 1, n - cnt2) << endl;
	}

	return 0;
}