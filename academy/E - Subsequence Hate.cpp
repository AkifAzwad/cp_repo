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
		int ans = n;
		for (int i = 0; i < n; ++i) {
			int cnt1 = 0, cnt2 = 0;
			for (int j = 0; j < i; ++j) {
				if (s[j] != '0')cnt1++;
				else cnt2++;
			}
			for (int j = i; j < n; ++j) {
				if (s[j] != '1')cnt1++;
				else cnt2++;
			}
			int mx = min(cnt1, cnt2);
			ans = min(ans, mx);
		}
		cout << ans << endl;
	}

	return 0;
}