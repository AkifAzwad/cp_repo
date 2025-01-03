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
		int n, k; cin >> n >> k;
		string a, b; cin >> a >> b;
		n = a.size();
		int cnt1[30], cnt2[30];
		memset(cnt1, 0, sizeof cnt1);
		memset(cnt2, 0, sizeof cnt2);

		for (int i = 0; i < n; ++i) {
			cnt1[a[i] - 'a']++; cnt2[b[i] - 'a']++;
		}
		int found = 0;
		for (int i = 0; i < 30; ++i) {
			if (cnt1[i] != cnt2[i]) {
				if (cnt1[i] < cnt2[i])found = 1;
				else {
					int x = cnt1[i] - cnt2[i];
					if (x % k)found = 1;
					else {
						cnt1[i] -= x;
						cnt1[i + 1] += x;
					}
				}
			}
		}
		for (int i = 0; i < 26; ++i) {
			if (cnt1[i] != cnt2[i])found = 1;
			// cout << cnt1[i] << " " << cnt2[i] << endl;
		}
		if (found)cout << "No\n";
		else cout << "Yes\n";
	}

	return 0;
}