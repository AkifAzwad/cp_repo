#include "bits/stdc++.h" // Include every standard library 
using namespace std;
using namespace std::chrono;

///////////////data types//////////////////

using ll = long long;

/////////constants lowerCamelCase/////////

//const int mod = 1e9 + 7;
const long long INFF = LLONG_MAX;

///////////methods lowerCamelCase//////////
ll lcm(ll a, ll b) {
	return (a * b) / __gcd(a, b);
}


/////////////////////////////////////////
int main()
{


	ios_base::sync_with_stdio(0);
	cin.tie(0);

	ll n, a = 1, b = 1;
	cin >> n;
	ll a1 = n, b1 = n;
	ll x = n, ans = n;

	for (ll i = 2; i * i <= n; ++i) {
		if (n % i == 0) {
			a = i;
			b = n / i;
			if (lcm(a, b) == x && max(a, b) < ans) {
				ans = max(a, b);
				a1 = a; b1 = b;
			}
		}
	}


	cout << a1 << " " << b1 << endl;

	return 0;
}