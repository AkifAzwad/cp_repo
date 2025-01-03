#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;
#define int ll

/////////constants/////////
//const int mod = 1e9 + 7;
const int N = 2e5 + 9;
int cnt, rec[N];
//////////methods//////////


///////////////////////////
signed main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, k; cin >> n >> k;
	set<int>s;
	for (int i = 0; i < n; ++i) {
		int x, y;
		cin >> x >> y;
		cnt += y;
		rec[x] += y;
		s.insert(x);
	}
	std::vector<int> v;
	for (auto p : s) {
		v.push_back(p);
	}

	for (int i = v.size() - 1; i > -1; --i) {
		cnt -= rec[v[i]];
		// cout << cnt << endl;
		if (cnt < k) {
			cout << v[i];
			return 0;
		}
	}


	return 0;
}