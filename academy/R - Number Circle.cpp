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
	std::vector<int> v, cur(n);
	for (int i = 0; i < n; ++i) {
		cin >> cur[i];
	}

	sort(cur.begin(), cur.end());
	int x = cur[n - 3];

	for (int i = 0; i < n; ++i) {
		if (i == n - 3) {
			cur.erase(cur.begin() + i);
			break;
		}
	}
	cur.push_back(x);
	for (auto p : cur) {
		v.push_back(p);
	}
	v.push_back(v[0]); v.push_back(v[1]);


	int found = 0;
	for (int i = 1; i + 1 < v.size(); ++i) {
		// cout << v[i - 1] + v[i + 1] << " " << v[i] << endl;
		if (v[i - 1] + v[i + 1] <= v[i])found = 1;
	}

	if (!found) {
		cout << "YES\n";
		for (int i = 0; i < n; ++i) {
			cout << v[i] << " ";
		}
	} else {
		cout << "NO\n";
	}

	return 0;
}