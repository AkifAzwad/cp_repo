#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;


/////////constants/////////
//const int mod = 1e9 + 7;

int a[100005], b[25];
int w, mx;
ll n;
//////////methods//////////
void knap(int pos, int sum, int weight) {
	if (sum > w) {
		return;
	}
	if (pos >= n) {
		// cout << pos << " " << sum << " " << weight << endl;
		mx = max(mx, weight);
		return;
	}
	knap(pos + 1, sum + a[pos], weight + b[pos]);
	knap(pos + 1, sum, weight);

}
string found = "NO";
void express(int pos, int sum) {

	if (pos >= n) {
		// cout << pos << " " << sum << endl;
		if (sum == w)found = "YES";
		return;
	}
	express(pos + 1, sum + a[pos]);
	express(pos + 1, sum - a[pos]);
}

void reach(ll val, ll n) {
	if (val > n)return;
	if (val == n)found = "YES";
	reach(val * 10, n);
	reach(val * 20, n);
}
int row, col;
int arr[15][15];
void path(int x, int y, int sum) {
	// cout << x << " " << y << " " << sum << endl;
	if (x == row - 1 && y == col - 1)mx = max(sum + arr[x][y], mx);
	if (x >= row || y >= col) {
		// if (x - 1 == row - 1 && y == col - 1)mx = max(sum, mx);
		return;
	}
	path(x + 1, y, sum + arr[x][y]);
	path(x, y + 1, sum + arr[x][y]);
}
int s, e;
int cnt;
void ways(int pos) {
	if (pos > e) {
		return;
	}
	if (pos == e) {
		cnt++;
	}
	ways(pos + 1);
	ways(pos + 2);
	ways(pos + 3);
}
void leftMax(int pos) {
	if (pos >= n)return;
	mx = max(mx, a[pos]);
	cout << mx << " ";
	leftMax(pos + 1);
}

int dem1[105][105], dem2[105][105], res[105][105];

void add(int x) {
	if (x >= row)return ;

	for (int i = 0; i < col; ++i) {

		res[x][i] = dem1[x][i] + dem2[x][i];
	}
	add(x + 1);
}



int ncr(int n, int r) {
	// cout << n << " " << r << endl;
	if (n < 0 || r < 0)return 0;
	if (n < r)return 0;
	if (n <= 1)return 1;
	return ncr(n - 1, r) + ncr(n - 1, r - 1);
}
///////////////////////////

int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	ll n, r;
	cin >> n >> r;

	cout << ncr(n, r);


	return 0;
}