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
	long long t[4 * N][3], lazy[4 * N];
	ST() {
		memset(t, 0, sizeof t);
		memset(lazy, 0, sizeof lazy);
	}
	inline void push(int n, int b, int e) { // change this
		// if (n == 7 || n == 13 || n == 19) {
		// 	cout << b << " " << e << " " << t[n][0] << " " << lazy[n] << endl;
		// }
		if (lazy[n] == 0) return;
		if (lazy[n] % 3 == 1) {
			int temp1, temp2, temp3;
			temp1 = t[n][0]; temp2 = t[n][1]; temp3 = t[n][2];
			t[n][0] = temp3; t[n][1] = temp1; t[n][2] = temp2;
		}
		else if (lazy[n] % 3 == 2) {
			int temp1, temp2, temp3;
			temp1 = t[n][0]; temp2 = t[n][1]; temp3 = t[n][2];
			t[n][0] = temp3; t[n][1] = temp1; t[n][2] = temp2;

			temp1 = t[n][0]; temp2 = t[n][1]; temp3 = t[n][2];
			t[n][0] = temp3; t[n][1] = temp1; t[n][2] = temp2;
		}
		if (b != e) {
			lazy[lc] = lazy[lc] + lazy[n];
			lazy[rc] = lazy[rc] + lazy[n];
		}
		lazy[n] = 0;
	}
	inline long long combine(long long a, long long b) { // change this
		return a + b;
	}
	inline void pull(int n) { // change this
		t[n][0] = t[lc][0] + t[rc][0];
		t[n][1] = t[lc][1] + t[rc][1];
		t[n][2] = t[lc][2] + t[rc][2];
	}
	void build(int n, int b, int e) {
		lazy[n] = 0; // change this
		if (b == e) {
			t[n][0] = 1;
			t[n][1] = 0;
			t[n][2] = 0;
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
		if (i <= b && e <= j) return t[n][0];
		int mid = (b + e) >> 1;
		return combine(query(lc, b, mid, i, j), query(rc, mid + 1, e, i, j));
	}
} tree;


///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);


	// tree.build(1, 1, 5);
	// tree.upd(1, 1, 5, 1, 3, 1);
	// cout << tree.query(1, 1, 5, 1, 5) << endl;

	int test; cin >> test;
	int pos = 1;
	while (test--) {
		int n, q; cin >> n >> q;


		tree.build(1, 1, n);
		// tree.upd(1, 1, n, 1, 1, 1);
		// cout << tree.query(1, 1, n, 1, n) << endl;;

		cout << "Case " << pos++ << ":\n";
		while (q--) {
			int type;
			int left, right;

			cin >> type >> left >> right;
			left++; right++;

			if (!type) {
				// cout << "0 " << left << " " << right << endl;
				tree.upd(1, 1, n, left, right, 1);
				// tree.query(1, 1, n, left, right);
				// cout << tree.query(1, 1, n, 7, 10) << endl << endl;
			}
			else {
				// cout << "1 " << left << " " << right << endl;

				cout << tree.query(1, 1, n, left, right) << endl;
			}

		}


	}

	return 0;
}