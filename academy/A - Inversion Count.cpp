#include "bits/stdc++.h"
using namespace std;
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

template <typename T> using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;


/////////data types/////////
using ll = long long;



/////////constants/////////
//const int mod = 1e9 + 7;



//////////methods//////////
const int N = 2e5 + 100;

int a[N];
struct ST {
	int t[4 * N];
	ST() {
		memset(a, 0, sizeof a);
		memset(t, 0, sizeof t);
	}
	void build(int n, int b, int e) {
		if (b == e) {
			t[n] = 0;
			return;
		}
		int mid = (b + e) >> 1, l = n << 1, r = l | 1;
		build(l, b, mid);
		build(r, mid + 1, e);
		t[n] = (t[l] + t[r]); // change this
	}
	void upd(int n, int b, int e, int i, int x) {
		if (b > i || e < i) return;
		if (b == e && b == i) {
			t[n] = x; // update
			return;
		}
		int mid = (b + e) >> 1, l = n << 1, r = l | 1;
		upd(l, b, mid, i, x);
		upd(r, mid + 1, e, i, x);
		t[n] = (t[l] + t[r]); // change this
	}
	int query(int n, int b, int e, int i, int j) {
		if (b > j || e < i) return 0; // return appropriate value
		if (b >= i && e <= j) return t[n];
		int mid = (b + e) >> 1, l = n << 1, r = l | 1;
		return (query(l, b, mid, i, j) + query(r, mid + 1, e, i, j)); // change this
	}
} mine;


///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int test; cin >> test;
	while (test--) {
		int n; cin >> n;

		ST();
		std::vector<int> temp;
		for (int i = 1; i <= n; ++i) {
			cin >> a[i];
			temp.push_back(a[i]);
		}

		sort(temp.begin(), temp.end());
		int k = 1;
		std::map<int, int> map1;

		for (auto p : temp) {
			map1[p] = k++;
		}


		mine.build(1, 1, N);
		// cout << mine.query(1, 1, n, 1, 2);

		ll ans = 0;
		int j = 1;
		for (int i = n; i > 0; --i) {
			mine.upd(1, 1, N, map1[a[i]], 1);

			// if (a[i] != 1)cout << a[i] << " " << map1[a[i]] << " " << mine.query(1, 1, N, 1, map1[a[i]] - 1) << endl;
			if (a[i] != 1)ans += mine. query(1, 1, N, 1, map1[a[i]] - 1);

		}
		cout << ans << endl;

	}

	return 0;
}