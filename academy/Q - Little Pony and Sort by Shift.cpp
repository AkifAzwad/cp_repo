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

	int n; cin >> n;
	std::vector<int> v(n);
	for (int i = 0; i < n; ++i) {
		cin >> v[i];
	}
	int j = 0;
	for (int i = 0; i < n; ++i) {
		v.push_back(v[j++]);
	}

	int cnt = 1, found = 0;
	for (int i = 0; i + 1 < v.size(); ++i) {
		// cout << v[i] << " " << cnt << endl;
		if (cnt == n) {
			// cout << v[i] << " " << cnt << endl;
			// cout << i << endl;
			int val = 2 * n - i - 1;
			if (i + 1 > n)cout << val << endl;
			else cout << "0\n";
			return 0;
		}
		if (v[i] > v[i + 1]) {
			cnt = 1;
		} else cnt++;
	}
	cout << "-1";

	return 0;
}