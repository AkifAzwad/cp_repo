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
		if (n <= 2)cout << n << endl;
		else {
			std::vector<int> ans1, ans2;

			ll sum1 = 0;
			for (int i = 1; i <= n; ++i) {
				if (i % 2 == 0)ans1.push_back(1), sum1++;
				else ans1.push_back(2), sum1 += 2;
				if (sum1 >= n)break;
			}
			ll sum2 = 0;
			for (int i = 1; i <= n; ++i) {
				if (i % 2)ans2.push_back(1), sum2++;
				else ans2.push_back(2), sum2 += 2;
				if (sum2 >= n)break;
			}
			// cout << sum1 << " " << sum2 << endl;
			if (sum1 == n) {
				for (auto p : ans1) {
					cout << p;
				} cout << endl;
			} else {
				for (auto p : ans2) {
					cout << p;
				} cout << endl;
			}
		}
	}

	return 0;
}