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

	string a, b; cin >> a >> b;
	int n = a.size();
	int ans = 0;
	for (int i = 0; i + b.size() - 1 < n; ++i) {
		int x = 0, cnt = 0;
		for (int j = i; x < b.size(); ++j) {
			if (a[j] != b[x])cnt++;
			x++;
		}
		// cout << i << " " << cnt << endl;
		if (cnt % 2 == 0 && cnt != 0)ans++;
	}
	cout << ans << "\n";

	return 0;
}