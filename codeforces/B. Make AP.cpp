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

	int t;
	cin >> t;
	while (t--) {
		int a, b, c;
		cin >> a >> b >> c;

		int found = 0;

		int d;



		int new_a = b - (c - b);
		if (new_a >= a && new_a % a == 0 && new_a != 0) {
			found = 1;
		}

		int new_b = a + (c - a) / 2;
		if (new_b >= b && (c - a) % 2 == 0 && new_b % b == 0 && new_b != 0) {
			found = 1;
		}

		int new_c = a + 2 * (b - a);
		if (new_c >= c && new_c % c == 0 && new_c != 0) {
			found = 1;
		}

		if (found)cout << "YES\n";
		else cout << "NO\n";

	}

	return 0;
}