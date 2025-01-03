#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;



/////////constants/////////
//const int mod = 1e9 + 7;



//////////methods//////////
const int N = 5e5 + 9;
int a[N];
struct ST {
#define lc (n << 1)
#define rc ((n << 1) + 1)
	long long t[4 * N], lazy[4 * N];
	ST() {
		memset(t, 0, sizeof t);
		memset(lazy, 0, sizeof lazy);
	}
	inline void push(int n, int b, int e) { // change this
		if (lazy[n] == 0) return;

		// cout << lazy[n] << endl;
		// t[n] = t[n] + lazy[n] * (e - b + 1);
		t[n] = (e - b + 1) - t[n];
		// cout << b << " " << e << " " << lazy[n] << " " << t[n] << endl;
		if (b != e) {
			lazy[lc] ^= 1;	//lazy[lc] + lazy[n];
			lazy[rc] ^= 1; 	//lazy[rc] + lazy[n];
		}
		lazy[n] = 0;
	}
	inline long long combine(long long a, long long b) { // change this
		return a + b;
	}
	inline void pull(int n) { // change this
		t[n] = t[lc] + t[rc];
	}
	void build(int n, int b, int e) {
		lazy[n] = 0; // change this
		if (b == e) {
			t[n] = a[b];
			return;
		}
		int mid = (b + e) >> 1;
		build(lc, b, mid);
		build(rc, mid + 1, e);
		pull(n);
	}
	void upd(int n, int b, int e, int i, int j, long long v) {
		push(n, b, e);
		if (j < b || e < i) return;
		if (i <= b && e <= j) {
			lazy[n] = v; //set lazy
			push(n, b, e);
			return;
		}
		int mid = (b + e) >> 1;
		upd(lc, b, mid, i, j, v);
		upd(rc, mid + 1, e, i, j, v);
		pull(n);
	}
	long long query(int n, int b, int e, int i, int j) {
		push(n, b, e);
		if (i > e || b > j) return 0; //return null
		if (i <= b && e <= j) return t[n];
		int mid = (b + e) >> 1;
		return combine(query(lc, b, mid, i, j), query(rc, mid + 1, e, i, j));
	}
} tree;


///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	int turn = 1;
	while (t--) {
		// Case 1:
		cout << "Case " << turn++ << ":\n";
		string s; cin >> s;
		int n = s.size();
		for (int i = 0; i < n; ++i) {
			a[i + 1] = s[i] - '0';

		}
		tree.build(1, 1, n);

		int q;
		cin >> q;
		while (q--) {
			char type;
			cin >> type;
			if (type == 'I') {
				int l, r;
				cin >> l >> r;
				// cout << q << "upd\n";
				tree.upd(1, 1, n, l, r, 1);
				// cout << endl;
			}
			else {
				int pos, r; cin >> pos;
				// cout << "query\n";
				cout << tree.query(1, 1, n, pos, pos) << endl;;
				// cout << endl;
			}
		}

	}

	return 0;
}