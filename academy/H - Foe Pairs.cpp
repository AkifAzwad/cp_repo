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

	int n, m; cin >> n >> m;
	int a[n + 1];
	std::map<int, int> pos;
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
		pos[a[i]] = i;
	}


	std::vector<int> v(n + 1, n);
	for (int i = 1; i <= m; ++i) {
		int x, y;
		cin >> x >> y;
		int pos1, pos2;
		pos1 = pos[x]; pos2 = pos[y];
		if (pos1 > pos2)swap(pos1, pos2);
		v[pos1] = min(v[pos1], pos2 - 1);
	}

	ll ans = 0;
	int left, right = n;
	for (int i = n; i >= 1; --i) {
		right = min(right, v[i]);
		ans += right - i + 1;
		// cout << i << " " << right << endl;
	}
	cout << ans << endl;
	return 0;
}