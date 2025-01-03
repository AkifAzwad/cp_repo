#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;



/////////constants/////////
const int mod = 1e9 + 7;


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
		if (lazy[n] == -1) return;
		t[n] |= (lazy[n]);	//confusion
		if (b != e) {
			lazy[lc] = (lazy[lc] == -1 ? 1 : lazy[lc]) | lazy[n];
			lazy[rc] = (lazy[rc] == -1 ? 1 : lazy[rc]) | lazy[n];
		}
		lazy[n] = -1;
	}
	inline long long combine(long long a, long long b) { // change this
		return a & b;
	}
	inline void pull(int n) { // change this
		t[n] = t[lc] & t[rc];
	}
	void build(int n, int b, int e) {
		lazy[n] = -1; // change this
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
		if (i > e || b > j) return 1; //return null
		if (i <= b && e <= j) return t[n];
		int mid = (b + e) >> 1;
		return combine(query(lc, b, mid, i, j), query(rc, mid + 1, e, i, j));
	}
} t;


///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, m;
	cin >> n >> m;



	t.build(1, 1, n);

	// t.upd(1, 1, n, 1, 3, 3);


	// cout << endl;
	// cout << t.query(1, 1, n, 1, 2);


	while (m--) {
		int type;
		cin >> type;
		if (type == 1) {
			int l, r, v;
			cin >> l >> r >> v;
			l++;
			t.upd(1, 1, n, l, r, v);
			// cout << endl;
			// cout << endl;
		} else {
			int left, right;
			cin >> left >> right;
			left++;
			// cout << endl;
			ll ans = t.query(1, 1, n, left, right);
			if (ans == INT_MAX)ans = 0;
			cout << ans << endl;
		}
	}

	return 0;
}

