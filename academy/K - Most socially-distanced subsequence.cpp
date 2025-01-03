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
		int a[n];
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
		}

		int last = a[0];
		int turn = a[0] < a[1];
		std::vector<int> ans;
		ans.push_back(a[0]);
		for (int i = 1; i < n; ++i) {
			int cur = a[i - 1] < a[i];
			if (turn != cur) {
				ans.push_back(last);
				turn = cur;
			}
			last = a[i];

		}
		ans.push_back(a[n - 1]);
		cout << ans.size() << endl;
		for (auto p : ans) {
			cout << p << " ";
		}
		cout << endl;
	}

	return 0;
}