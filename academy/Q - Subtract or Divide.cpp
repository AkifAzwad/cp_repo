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
		if (n <= 3)cout << n - 1 << endl;
		else if (n % 2 == 0)cout << "2\n";
		else cout << "3\n";
	}

	return 0;
}