#include "bits/stdc++.h"
using namespace std;

#define int long long
/////////data types/////////
using ll = long long;


/////////constants/////////
//const int mod = 1e9 + 7;


//////////methods//////////


///////////////////////////
signed main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;

	int found = 0;
	for (int i = 2; i * i <= n; ++i) {
		if (n % i == 0)found = 1;
	}

	if (!found)cout << "1\n";
	else if (n <= 3)cout << "1\n";
	else if (n % 2) {
		found = 0;
		n -= 2;
		for (int i = 2; i * i <= n; ++i) {
			if (n % i == 0)found = 1;
		}
		if (found)cout << "3\n";
		else cout << "2\n";
	} else {
		cout << "2\n";
	}


	return 0;
}