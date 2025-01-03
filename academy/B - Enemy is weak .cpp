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
	int a[n];
	o_set <int> se1, se2;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		se2.insert(a[i]);
	}

	int j = n - 1;
	ll ans = 0;
	for (int i = 0; i < n; ++i) {
		se1.insert(a[i]);
		ll x = se1.size() - se1.order_of_key(a[i]) - 1;
		ll y = se2.order_of_key(a[i]);
		se2.erase(se2.find(a[i]));
		// cout << x << " " << y << endl;
		j--;
		ans += x * y;
	}

	cout << ans << endl;

	return 0;
}