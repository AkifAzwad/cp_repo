#include "bits/stdc++.h"
using namespace std;

#define int long long
/////////data types/////////
using ll = long long;


/////////constants/////////
//const int mod = 1e9 + 7;


//////////methods//////////


///////////////////////////
signed main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n; cin >> n;
	int a[n], b[n];
	std::map<int, int> cnt;
	for (int i = 0; i < n; ++i) {
		cin >> a[i]; b[i] = a[i];
		cnt[a[i]]++;
	}
	sort(b, b + n);
	if (b[0] == b[2]) {
		ll val = (cnt[b[0]] * (cnt[b[0]] - 1) * (cnt[b[0]] - 2)) / 6;
		cout << val;
	}
	else if (b[1] == b[2]) {
		ll val = (cnt[b[1]] * (cnt[b[1]] - 1) ) / 2;
		cout << val;
	}
	else {
		cout << cnt[b[2]];
	}



	return 0;
}