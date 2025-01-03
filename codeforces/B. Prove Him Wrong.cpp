#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;


/////////constants/////////
//const int mod = 1e9 + 7;
ll mx = 1e9;

//////////methods//////////


///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		ll x = 1, cnt = 0;
		std::vector<ll> ans;
		int found = 0;
		while (1) {
			ans.push_back(x);
			cnt++;
			if (cnt == n)break;
			x *= 3;
			if (x > mx) {
				found = 1;
				break;
			}
		}
		if (found)cout << "NO\n";
		else {
			cout << "YES\n";
			for (auto p : ans) {
				cout << p << " ";
			} cout << endl;

		}

	}

	return 0;
}