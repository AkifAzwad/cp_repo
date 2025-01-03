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

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int a[n];
		o_set<int> se1, se2;
		std::map<int, int> map1;

		for (int i = 0; i < n; ++i) {
			cin >> a[i];
			map1[a[i]] = i + 1;
			se2.insert(a[i]);
		}

		int found = 0;
		int x = 0, y = 0, z = 0;
		for (int i = 0; i < n; ++i) {
			se2.erase(a[i]);
			x = 0; y = 0; z = 0;
			x = se1.order_of_key(a[i]);
			z = se2.order_of_key(a[i]);
			if (x != 0 && z != 0) {
				y = i + 1;
				x = *se1.begin(); z = *se2.begin();
				x = map1[x];
				z = map1[z];
				// cout << x << " " << y << " " << z << endl;
				found = 1; break;
			}
			se1.insert(a[i]);
		}

		if (found) {
			cout << "YES\n";
			cout << x << " " << y << " " << z << endl;
		} else cout << "NO\n";

	}

	return 0;
}