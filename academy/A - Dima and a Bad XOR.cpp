#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;


/////////constants/////////
//const int mod = 1e9 + 7;


//////////methods//////////


///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n, m; cin >> n >> m;
	int a[n][m];
	int ans = 0;
	std::vector<int> v;
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j) {
			cin >> a[i][j];
			if (j == 0)ans ^= a[i][j];
		}
		v.push_back(1);
	}
	if (!ans) {
		int found = 0;
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				if (a[i][j] != a[i][0]) {
					v[i] = j + 1;
					found = 1;
					break;
				}
			}
			if (found)break;
		}
		if (found) {
			cout << "TAK\n";
			for (auto p : v) {
				cout << p << " ";
			}

		} else {
			cout << "NIE\n";
		}

	}

	else {
		cout << "TAK\n";
		for (auto p : v) {
			cout << p << " ";
		}
	}



	return 0;
}