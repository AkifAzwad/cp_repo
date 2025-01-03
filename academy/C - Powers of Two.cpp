#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;


/////////constants/////////
//const int mod = 1e9 + 7;
const int N = 30;

//////////methods//////////


///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int check[35];
	for (int i = 1; i <= N; ++i) {
		check[i] = int(pow(2, i));
	}

	int n; cin >> n;
	int a[n];
	std::map<int, int> map;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	ll ans = 0;
	for (int i = n - 1; i > -1; --i) {
		ans += map[a[i]];
		for (int j = 1; j <= N; ++j) {
			int num = check[j] - a[i];
			// cout << check[j] << " " << num << endl;
			if (num > 0) {
				map[num]++;
			}
			// } cout << endl;
		}
	}
	// for (auto p : map) {

	// }



	cout << ans << endl;

	return 0;
}