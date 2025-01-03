#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;



/////////constants/////////
//const int mod = 1e9 + 7;



//////////methods//////////
struct Node {
	int pref, suf, sum, seg;

	Node() {
		pref = suf = sum = seg = 0;
	}

}



const int N = 3e5 + 9;

int a[N];
struct ST {
	Node t[4 * N];
	static const int inf = 1e9;
	ST() {
		memset(t, 0, sizeof t);
	}

	inline void pull(int n, int l, int r) {
		t[n].sum = t[l].sum + t[r].sum;
		t[n].pref = max(t[l].pref, t[r].pref + t[l].sum);
		t[n].suf = max(t[r].suf, t[l].suf + t[r].sum);
		t[n].seg = max(max(t[l].seg, t[r].seg), t[l].suf + t[r].pref);
	}

	void build(int n, int b, int e) {
		if (b == e) {
			t[n].seg = t[n].sum = t[n].pref = t[n].suf = a[b];
			return;
		}
		int mid = (b + e) >> 1, l = n << 1, r = l | 1;
		build(l, b, mid);
		build(r, mid + 1, e);
		pull(); // change this
	}
	void upd(int n, int b, int e, int i, int x) {
		if (b > i || e < i) return;
		if (b == e && b == i) {
			t[n].seg = t[n].sum = t[n].pref = t[n].suf = x; // update
			return;
		}
		int mid = (b + e) >> 1, l = n << 1, r = l | 1;
		upd(l, b, mid, i, x);
		upd(r, mid + 1, e, i, x);
		pull(); // change this
	}
	int query(int n, int b, int e, int i, int j) {
		if (b > j || e < i) return -inf; // return appropriate value
		if (b >= i && e <= j) return t[n].seg;
		int mid = (b + e) >> 1, l = n << 1, r = l | 1;
		return max(query(l, b, mid, i, j), query(r, mid + 1, e, i, j)); // change this
	}
} tree;


///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);



	return 0;
}