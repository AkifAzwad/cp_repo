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
	std::vector<std::pair<int, int> > v1, v2;
	for (int i = 0; i < n; ++i) {
		int l, r; cin >> l >> r;
		v1.push_back({l, r});
	}
	for (int i = 0; i < n; ++i) {
		int l, r; cin >> l >> r;
		v2.push_back({l, r});
	}

	sort(v1.begin(), v1.end()); sort(v2.begin(), v2.end());

	int x = v1[0].first + v2.back().first;
	int y = v1[0].second + v2.back().second;
	cout << x << " " << y << endl;

	return 0;
}