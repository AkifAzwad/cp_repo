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

	int n; cin >> n;
	int a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	std::map<int, int> cnt;
	int l = 1;
	std::vector<int> ans;
	for (int i = 0; i < n; ++i) {
		cnt[a[i]]++;
		if (cnt[a[i]] % 2 == 0 ) {
			// cout << l << " " << i + 1 << "\n";
			ans.push_back(l); ans.push_back(i + 1);
			l = i + 2;
			cnt.clear();
		}
	}

	if (ans.empty()) {
		cout << "-1";
		return 0;
	}

	if (ans.back() != n) {
		ans.pop_back();
		ans.push_back(n);
	}
	cout << ans.size() / 2 << endl;
	for (int i = 0; i < ans.size(); i += 2) {
		cout << ans[i] << " " << ans[i + 1] << endl;
	}

	return 0;
}