#include "bits/stdc++.h"
using namespace std;


/////////////data types//////////////////
using ll = long long;
const int mx = 100005;



////////constants/////////
//const int mod = 1e9 + 7;
int arr[mx];
std::pair<int, int> tree[4 * mx];


// //////////methods/////////
void build(int node, int b, int e) {
	if (b == e) {
		tree[node] = {arr[b], 1};
		return;
	}

	int L = 2 * node;
	int R = 2 * node + 1;

	int M = (b + e) / 2;

	build(L, b, M);
	build(R, M + 1, e);

	// tree[node] = min(tree[L], tree[R]);
	if (tree[L].first < tree[R].first) {
		tree[node] = tree[L];
	} else if (tree[L].first > tree[R].first) {
		tree[node] = tree[R];
	} else {
		tree[node].first = tree[L].first;
		tree[node].second = tree[L].second + tree[R].second;
	}
}

std::pair<int, int> query(int node, int b, int e, int i, int j) {

	if (i > e || j < b) {
		return {INT_MAX, INT_MAX};
	}
	if (b >= i && e <= j) {
		return tree[node];
	}
	int L = 2 * node;
	int R = 2 * node + 1;

	int M = (b + e) / 2;

	std::pair<int, int> p1 = query(L, b, M, i, j);
	std::pair<int, int> p2 = query(R, M + 1, e, i, j);

	// cout << p1.first << " " << p2.first << endl;
	// cout << p1.second << " " << p2.second << endl;
	// return min(p1, p2);
	if (p1.first < p2.first) {
		return p1;
	} else if (p1.first > p2.first) {
		return p2;
	} else {
		return {p1.first, p1.second + p2.second};
	}

}

void upd(int node, int b, int e, int i, int x) {
	if (i > e || i < b) {
		return;
	}
	if (b == e && e == i) {
		// cout << b << " " << e << endl;
		tree[node].first = x;
		return;
	}
	int L = 2 * node;
	int R = 2 * node + 1;
	int M = (b + e) / 2;
	upd(L, b, M, i, x);
	upd(R, M + 1, e, i, x);
	if (tree[L].first < tree[R].first) {
		tree[node] = tree[L];
	} else if (tree[L].first > tree[R].first) {
		tree[node] = tree[R];
	} else {
		tree[node].first = tree[L].first;
		tree[node].second = tree[L].second + tree[R].second;
	}
}
/////////////////////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);


	int n, m; cin >> n >> m;
	for (int i = 1; i <= n; ++i) {
		cin >> arr[i];
	}

	// std::pair<int, int> p1, p2, p;
	// p1 = {0, 99}, p2 = {0, 3};
	// p = min(p1, p2);
	// cout << p.first << " " << p.second << endl;

	build(1, 1, n);

	while (m--) {
		int type, x, y;
		cin >> type >> x >> y;
		x++;
		if (type == 1) {
			upd(1, 1, n, x, y);
		} else {
			std::pair<int, int> p = query(1, 1, n, x, y);
			cout << p.first << " " << p.second << endl;
		}
	}

	return 0;
}
