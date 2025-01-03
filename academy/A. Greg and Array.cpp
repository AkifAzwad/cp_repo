#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;
#define int long long


/////////constants/////////
//const int mod = 1e9 + 7;
const int N = 1e5 + 100;
ll a[N], cnt[N], d[N], val[N];
std::vector<std::pair<ll, ll> > op(N);
ll ans[N];
//////////methods//////////



///////////////////////////
signed main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, m, k; cin >> n >> m >> k;
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
	}

	for (int i = 1; i <= m; ++i) {
		int l, r, d; cin >> l >> r >> d;
		op[i].first = l; op[i].second = r;
		val[i] = d;
	}
	while (k--) {
		int x, y; cin >> x >> y;
		cnt[x]++; cnt[y + 1]--;
	}
	for (int i = 1; i <= m; ++i) {
		cnt[i] += cnt[i - 1];
	}

	for (int i = 1; i <= m; ++i) {
		int l = op[i].first, r = op[i].second;
		d[l] += val[i] * cnt[i] ;
		d[r + 1] -= val[i] * cnt[i] ;
	}

	for (int i = 1; i <= n; ++i) {
		ans[i] = ans[i - 1] + d[i];
		cout << ans[i] + a[i] << " ";
	}

	return 0;
}