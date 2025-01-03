#include "bits/stdc++.h" // Include every standard library 
using namespace std;


///////////////data types//////////////////
using ll = long long;



///////////methods lowerCamelCase//////////
ll pwr(ll a, ll b) {
	ll res = 1;
	while (b > 0) {
		if (b & 1)
			res = res * a;
		a = a * a;
		b >>= 1;
	}
	return res;
}


/////////constants lowerCamelCase/////////
//const int mod = 1e9 + 7;
const long long INFF = LLONG_MAX;


/////////////////////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	ll n; cin >> n;
	ll a[n];
	ll mx = 1e14;
	ll sum = 0;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	sort(a, a + n);


	int found = 0;
	ll best_ans = mx;
	for (int i = 1; ; ++i) {
		if (!found) {
			ll num = 1;
			sum = 0;
			for (int j = 0; j < n; ++j) {
				sum += abs(a[j] - num);
				num *= i;
				if (num > mx)found = 1;
			}
			if (!found)best_ans = min(best_ans, sum);
		} else break;
	}

	cout << best_ans << endl;



	return 0;
}