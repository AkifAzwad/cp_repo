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
		int a[n + 1];
		std::map<int, int> pos, dif, ans;
		for (int i = 1; i <= n; ++i) {
			cin >> a[i];
			pos[a[i]] = 0;
			ans[i] = -1;
		}

		for (int i = 1; i <= n; ++i) {
			if (1) {
				int cur = i;
				int last = pos[a[i]];
				int x = cur - last;
				// if (a[i] == 3)cout << x << endl;
				dif[a[i]] = max(x, dif[a[i]]);
			}
			pos[a[i]] = i;
		}


		for (auto p : pos) {
			int l, r;
			l = p.first; r = p.second;
			int cur = n;
			if (r != n)cur++;
			int last = pos[l];
			int x = cur - last;
			dif[l] = max(x, dif[l]);
			// cout << p.first << " " << p.second << endl;
		}

		// std::vector<std::pair<int, int> > v;
		for (auto p : dif) {
			int l, r;
			l = p.first; r = p.second;
			if (ans[r] == -1)ans[r] = l;
		}

		// for (auto p : ans) {
		// 	if (p.second != -1)cout << p.first << " " << p.second << endl;
		// }


		int mn = 1e9;
		for (int i = 1; i <= n; ++i) {
			if (ans[i] != -1) {
				mn = min(ans[i], mn);
				cout << mn << " ";
			} else {
				if (mn != (int)1e9)cout << mn << " ";
				else cout << ans[i] << " ";
			}
		}
		cout << endl;

	}

	return 0;
}