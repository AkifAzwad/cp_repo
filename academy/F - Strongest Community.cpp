#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;



/////////constants/////////
//const int mod = 1e9 + 7;



//////////methods//////////
struct Node {
	int cnt, cnt_left, cnt_right, left, right;

	Node() {
		cnt_left = 0; cnt_right = 0; cnt = 0; left = 0; right = 0;
	}

} node;

const int N = 3e5 + 9;

int a[N];
struct ST {
	Node t[4 * N];
	static const int inf = 1e9;
	ST() {
		memset(t, 0, sizeof t);
	}
	void upd(Node &A, Node &L, Node &R)
	{
		A.cnt = max(L.cnt, R.cnt);
		if (L.right == R.left) A.cnt = max(A.cnt, L.cnt_right + R.cnt_left);

		A.left = L.left;
		A.cnt_left = L.cnt_left;
		if (L.left == R.left) A.cnt_left += R.cnt_left;

		A.right = R.right;
		A.cnt_right = R.cnt_right;
		if (L.right == R.right) A.cnt_right += L.cnt_right;
	}
	void build(int n, int b, int e) {
		if (b == e) {
			Node &A = t[n];
			A.left = A.right = a[b];
			A.cnt_left = A.cnt_right = A.cnt = 1;
			return;
		}
		int mid = (b + e) >> 1, l = n << 1, r = l | 1;
		build(l, b, mid);
		build(r, mid + 1, e);
		// t[n] = node.Max(t[l], t[r]); // change this
		upd(t[n], t[l], t[r]);
	}

	Node query(int n, int b, int e, int i, int j) {

		// cout << "ff "  << b << " " << e << " " << t[n].cnt << endl;

		if (b > j || e < i) return Node(); // return appropriate value
		if (b >= i && e <= j) {
			return t[n];
		}
		int mid = (b + e) >> 1, l = n << 1, r = l | 1;
		// return node.Max(query(l, b, mid, i, j),
		//                 query(r, mid + 1, e, i, j)); // change this
		Node x = query(l, b, mid, i, j);
		Node y = query(r, mid + 1, e, i, j);
		Node ans;
		upd(ans, x, y);
		return ans;
	}

} tree;

///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);


	// tree.build(1, 1, 10);
	// cout << tree.query(1, 1, 10, 1, 5).cnt << endl;


	int test; cin >> test;
	int turn = 1;

	while (test--) {
		int n, q, c;
		cin >> n >> c >> q;

		for (int i = 1; i <= n; ++i) {
			cin >> a[i];
		}

		tree.build(1, 1, n);
		// cout << tree.query(1, 1, n, 1, 7).cnt << endl;
		cout << "Case " << turn++ << ":\n";
		while (q--) {
			int type, pos;
			int l, r, value;
			cin >> l >> r;
			cout << tree.query(1, 1, n, l, r).cnt << endl;
		}

	}

	return 0;
}