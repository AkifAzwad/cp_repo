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
	int a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	int ans = 0;
	std::map<int, int> map;
	for (int i = 0; i < n; ++i) {
		map[a[i]]++;
	}
	for (auto p : map) {
		if (p.second > p.first)ans += abs(p.second - p.first);
		else if (p.second != p.first) ans += p.second;
	}


	cout << ans << endl;

	return 0;
}