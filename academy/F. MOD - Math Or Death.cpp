#include "bits/stdc++.h" // Include every standard library 
using namespace std;


///////////////data types//////////////////
using ll = long long;



/////////constants lowerCamelCase/////////
//const int mod = 1e9 + 7;



///////////methods lowerCamelCase//////////



/////////////////////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	ll a, b; cin >> a >> b;
	if (a == b)cout << "infinity\n";
	else if (a < b)cout << "0\n";
	else {
		ll ans = 0;


		ll n = (a - b);
		for (ll i = 1; i * i <= n; ++i) {
			if (n % i == 0) {
				if (a % i == b)ans++;
				if (i != n / i && n % (n / i) == 0 && a % (n / i) == b)ans++;
			}
		}

		cout << ans << endl;
	}

	return 0;
}