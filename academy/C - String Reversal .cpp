#include "bits/stdc++.h"
using namespace std;
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

template <typename T> using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
// o_set <typename> var;

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
	string s, x; cin >> s;
	x = s;
	reverse(x.begin(), x.end());

	std::vector<int> v[30];
	for (int i = 0; i < n; ++i) {
		v[s[i] - 'a'].push_back(i);
	}

	for (int i = 0; i < 30; ++i) {
		if (!v[i].empty())reverse(v[i].begin(), v[i].end());
	}

	std::vector<int> cur;
	for (int i = 0; i < n; ++i) {
		int temp = v[x[i] - 'a'].back();
		v[x[i] - 'a'].pop_back();
		cur.push_back(temp);
	}

	o_set<int> se;
	ll ans = 0;
	for (auto p : cur) {
		se.insert(p);
		// cout << p + 1 << endl;
		ans += se.size() - se.order_of_key(p) - 1;
	}
	cout << ans << endl;

	return 0;
}