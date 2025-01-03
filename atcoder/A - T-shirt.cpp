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

	double a, b, c, x;
	double ans = 0;
	cin >> a >> b >> c >> x;
	if (x <= a) {
		ans = 1;
	} else if (x <= b) {
		b -= a;
		ans = c / b;
	}
	cout << fixed << setprecision(9) << ans << endl;

	return 0;
}