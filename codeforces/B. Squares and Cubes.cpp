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

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int ans = 0;
		std::map<int, int> map;
		for (int i = 1; i * i <= n; ++i) {
			if (map[i * i] == 0) {
				map[i * i]++;
				ans++;
			}
		}
		for (int i = 1; i * i * i <= n; ++i) {
			if (map[i * i * i] == 0) {
				map[i * i * i]++;
				ans++;
			}
		}
		cout << ans << endl;
	}

	return 0;
}