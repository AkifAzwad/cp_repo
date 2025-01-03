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
		ll a, b, s; cin >> a >> s;
		int x, y;
		x = a % 10;
		y = s % 10;
		cout << x << " " << y << endl;
	}

	return 0;
}