#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;



/////////constants/////////
//const int mod = 1e9 + 7;



//////////methods//////////
struct Node
{
	bool bit[20];
	ll sum;

	Node() {
		for (int i = 0; i < 20; ++i) {
			bit[i] = 0;
		}
		sum = 0;
	}

};

const int N = 5e5 + 9;
int a[N];
struct ST {
#define lc (n << 1)
#define rc ((n << 1) + 1)
	Node t[4 * N];
	long long  lazy[4 * N];
	ST() {
		memset(t, 0, sizeof t);
		memset(lazy, 0, sizeof lazy);
	}
	inline void push(int n, int b, int e) { // change this
		if (lazy[n] == 0) return;
		t[n] = t[n] + lazy[n] * (e - b + 1);
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
		t[n] = t[lc] + t[rc];
	}
	void build(int n, int b, int e) {
		lazy[n] = 0; // change this
		if (b == e) {
			// t[n] = a[b];
			for (int i = 0; i < 20; ++i) {
				t[n].bit[i] = a[b] & (1 << i);
				t[n].sum += 2;
			}
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

	int n, m; cin >> n;

	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	cin >> m;
	while (m--) {
		int type;
		int left, right, value;
		cin >> type;
		if (type == 1) {
			cin >> left >> right;
		} else {
			cin >> left >> right >> value;
		}
	}

	return 0;
}