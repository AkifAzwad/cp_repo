#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;



/////////constants/////////
//const int mod = 1e9 + 7;



//////////methods//////////
ll pwr(ll a, ll b) {
	ll res = 1;
	while (b > 0) {
		if (b & 1)
			res = res * a;
		a = a * a;
		b >>= 1;
	}
	return res;
}

const int N = 3e5 + 9;
int parity;
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

		int cur = floor(log2(n));
		cur = cur % 2;
		if (parity == cur)t[n] = (t[l] ^ t[r]); // change this
		else t[n] = (t[l] | t[r]);
	}

	void upd(int n, int b, int e, int i, int x) {
		if (b > i || e < i) return;
		if (b == e && b == i) {
			t[n] = x; // update
			// cout << b << " " << x << endl;
			return;
		}
		int mid = (b + e) >> 1, l = n << 1, r = l | 1;
		upd(l, b, mid, i, x);
		upd(r, mid + 1, e, i, x);

		int cur = floor(log2(n));
		cur = cur % 2;
		if (parity == cur)t[n] = (t[l] ^ t[r]); // change this
		else t[n] = (t[l] | t[r]);
	}


	// int query(int n, int b, int e) {
	// 	// return t[1];
	// 	if (b > j || e < i) return 0; // return appropriate value
	// 	if (b >= i && e <= j) return t[n];
	// 	int mid = (b + e) >> 1, l = n << 1, r = l | 1;
	// 	return (query(l, b, mid, i, j) + query(r, mid + 1, e, i, j)); // change this //dont need it now
	// }
} tree;




///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);


	// tree.build(1, 1, 5);

	// cout << tree.query(1, 1, 5, 1, 5) << endl;

	// cout << floor(log2(13));

	int n, m; cin >> n >> m;
	n = pwr(2, n);


	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
	}



	parity = floor(log2(n));
	parity = parity % 2;
	tree.build(1, 1, n);



	// cout << tree.t[1] << endl;

	while (m--) {
		int p, b;
		cin >> p >> b;

		tree.upd(1, 1, n, p, b);
		cout << tree.t[1] << endl;


	}

	return 0;
}