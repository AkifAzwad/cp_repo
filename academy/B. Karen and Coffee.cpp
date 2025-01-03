#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;



/////////constants/////////
//const int mod = 1e9 + 7;
const int N = 2e5 + 100;
int  d[N];
int pre[N];
//////////methods//////////



///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, k, q; cin >> n >> k >> q;
	for (int i = 0; i < n; ++i) {
		int l, r;
		cin >> l >> r;
		d[l]++; d[r + 1]--;
	}
	for (int i = 1; i <= N; ++i) {
		d[i] += d[i - 1];
		pre[i] = pre[i - 1] + (d[i] >= k ? 1 : 0);
		// cout << pre[i] << " ";
	}

	for (int i = 0; i < q; ++i) {
		int l, r;
		cin >> l >> r;
		// cout << pre[r] << " " << pre[l - 1] << endl;
		cout << pre[r] - pre[l - 1] << endl;
	}

	return 0;
}