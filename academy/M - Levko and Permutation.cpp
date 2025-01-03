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

	int n, k; cin >> n >> k;
	if (n == k)cout << "-1\n";
	else {
		cout << n - k << " ";
		int x = 1, y = 2;
		for (int i = 2; i <= n; ++i) {
			if (i <= n - k) {
				cout << x++ << " ";
			} else {
				cout << i << " ";
			}
		}
	}

	return 0;
}