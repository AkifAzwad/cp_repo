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

	ll x, y, z;
	ll x1, y1, z1;
	cin >> x >> y >> z;
	ll cur;
	cur = 2 * y - z - x;
	if (cur >= 0)cout << cur << endl;
	else {
		cur = abs(cur);
		cur = (cur / 2) + 2 * (cur % 2 != 0);

		cout << cur << endl;
	}


	return 0;
}