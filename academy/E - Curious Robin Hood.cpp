#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;



/////////constants/////////
//const int mod = 1e9 + 7;



//////////methods//////////
const int N = 3e5 + 9;

ll a[N];
struct ST {
	ll t[4 * N];
	static const int inf = 1e9;
	ST() {
		memset(t, 0, sizeof t);
	}
	void build(int n, int b, int e) {
		if (b == e) {
			t[n] = a[b];
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
			if (x != 0)t[n] += x; // update
			else t[n] = x;
			return;
		}
		int mid = (b + e) >> 1, l = n << 1, r = l | 1;
		upd(l, b, mid, i, x);
		upd(r, mid + 1, e, i, x);
		t[n] = (t[l] + t[r]); // change this
	}
	ll query(int n, int b, int e, int i, int j) {
		if (b > j || e < i) return 0; // return appropriate value
		if (b >= i && e <= j) return t[n];
		int mid = (b + e) >> 1, l = n << 1, r = l | 1;
		return (query(l, b, mid, i, j) + query(r, mid + 1, e, i, j)); // change this
	}
} t;


///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int test; cin >> test;
	int turn = 1;

	while (test--) {
		int n, q;
		cin >> n >> q;

		for (int i = 1; i <= n; ++i) {
			cin >> a[i];
		}

		t.build(1, 1, n);

		// Case 1:
		cout << "Case " << turn++ << ":\n";
		while (q--) {
			int type, pos;
			int l, r, value;
			cin >> type;
			if (type == 1) {
				cin >> pos;
				pos++;
				cout << t.query(1, 1, n, pos, pos) << endl;
				t.upd(1, 1, n, pos, 0);
			} else if (type == 2) {
				cin >> pos >> value;
				pos++;
				t.upd(1, 1, n, pos, value);
			} else {
				cin >> l >> r;
				l++; r++;
				cout << t.query(1, 1, n, l, r) << endl;
			}
		}

	}

	return 0;
}