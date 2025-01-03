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
	set<int> s;
	std::map<int, int> map;
	for (int i = 0; i < n; ++i) {
		int x; cin >> x;
		map[x]++;
		s.insert(x);
	}
	int cur = 0, ans = 0;
	for (auto p : s) {
		int sum = n - map[p] - cur;
		cur += map[p];
		ans += sum * map[p];
	}

	cout << ans << endl;

	return 0;
}