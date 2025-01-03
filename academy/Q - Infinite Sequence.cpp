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

	ll mx;
	cin >> mx;

	ll num = 1;
	for (ll i = 1; i <= mx; i += num) {
		num++;
		if (i + num >= mx) {
			ll add = mx - i;
			// cout << i << endl;
			if (add == 0)add = 1;
			cout << add << endl;
			return 0;
		}
		// cout << i << endl;
	}




	return 0;
}