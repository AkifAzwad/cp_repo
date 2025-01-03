#include "bits/stdc++.h" // Include every standard library 
using namespace std;


///////////////data types//////////////////
typedef long long ll;



///////////methods lowerCamelCase//////////
bool sortbysec(const pair<int, int> &a,
               const pair<int, int> &b)
{
	return (a.second < b.second);
}


/////////constants lowerCamelCase/////////
//const int mod = 1e9 + 7;
const long long INFF = LLONG_MAX;


/////////////////////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n; cin >> n;
	ll s[n];
	for (int i = 0; i < n; ++i) {
		cin >> s[i];
	}
	ll c[n];
	for (int i = 0; i < n; ++i) {
		cin >> c[i];
	}

	ll x, y, z, ans = INFF;
	for (int j = 0; j < n; ++j) {
		int found1 = 0, found2 = 0;
		y = c[j];

		x = INFF;
		for (int i = 0; i < j; ++i) {
			if (s[i] < s[j]) {
				x = min(c[i], x);
				found1 = 1;
			}
		}
		z = INFF;

		for (int k = j + 1; k < n; ++k) {
			if (s[j] < s[k]) {
				// cout << k << " " << x << " " << c[j] << " " << c[k] << endl;
				z = min(c[k], z);
				found2 = 1;
			}
		}
		if (found1 && found2) {
			// ans = x + y + z;
			// cout << found1 << found2 << endl;
			ans = min(ans, x + y + z);
			// cout << x << " " << y << " " << z << endl;
		}

	}


	if (ans != INFF) {
		cout << ans << endl;
	}
	else cout << "-1\n";

	return 0;
}