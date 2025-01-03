#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;


/////////constants/////////
//const int mod = 1e9 + 7;
const int N = 1e6 + 5;
// std::vector<int> pos[N];
//////////methods//////////


///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, m; cin >> n >> m;
	int a[n + 1];
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
	}

	std::vector<int> pos(n + 1, 0);
	int last = a[1], ind = 1;
	pos[0] = 1;
	pos[1] = 1;
	for (int i = 2; i <= n; ++i) {
		// cout << i << " " << last << endl;
		if (last != a[i]) {
			pos[i] = ind;
			last = a[i];
			ind = i;
		} else {
			pos[i] = pos[i - 1];
			ind = i;
		}
	}


	// for (int i = 1; i <= n; ++i) {
	// 	cout << pos[i] << " ";
	// } cout << endl;



	while (m--) {
		int l, r, x;
		cin >> l >> r >> x;
		if (a[r] != x)cout << r << endl;
		else if (a[pos[r]] != x && pos[r] >= l)cout << pos[r] << endl;
		else cout << "-1\n";
	}

	return 0;
}
// 1 1 2 2 4 5