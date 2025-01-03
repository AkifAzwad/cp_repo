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
		std::vector<int> v;
		// v.push_back(3);
		for (int i = 0; i < n; ++i) {
			v.push_back(i + 1);
		}
		int cnt = 0;
		while (1) {

			int found = 1;
			while (found) {
				next_permutation(v.begin(), v.end());
				int check = 0;
				for (int k = 2; k < n; ++k) {
					if (v[k - 1] + v[k - 2] == v[k])check = 1;
				}
				if (check)found = 1;
				else found = 0;
			}
			cnt++;
			for (int k = 0; k < n; ++k) {
				cout << v[k] << " ";
			} cout << endl;
			next_permutation(v.begin(), v.end());
			if (cnt == n)break;
		}
	}

	return 0;
}