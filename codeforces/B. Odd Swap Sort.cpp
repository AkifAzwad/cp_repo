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
		std::vector<int> odd, even;
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
			if (a[i] % 2)odd.push_back(a[i]);
			else even.push_back(a[i]);
		}

		int found = 0;
		for (int i = 1; i < odd.size(); ++i) {
			if (odd[i] < odd[i - 1])found = 1;
		}
		for (int i = 1; i < even.size(); ++i) {
			if (even[i] < even[i - 1])found = 1;
		}
		if (found)cout << "No\n";
		else cout << "Yes\n";

	}

	return 0;
}