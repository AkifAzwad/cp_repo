#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;



/////////constants/////////
//const int mod = 1e9 + 7;

const int N = 105;
std::vector<int> v[N];
int ans[N][N];

//////////methods//////////



///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, t; cin >> t;
	n = t;
	while (t--) {
		int node, cnt;
		cin >> node >> cnt;
		while (cnt--) {
			int x; cin >> x;
			ans[node - 1][x - 1] = 1;
		}
	}

	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < n; ++j) {
			cout << ans[i][j];
			if (j < n - 1)cout << " ";
		} cout << endl;
	}


	return 0;
}