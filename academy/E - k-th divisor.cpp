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

	ll n, k; cin >> n >> k;

	std::vector<ll> v;
	for (ll i = 1; i * i <= n; ++i) {
		if (n % i == 0) {
			v.push_back(i);
			if (n / i != i && n % (n / i) == 0)v.push_back(n / i);
		}
	}

	sort(v.begin(), v.end());

	if (v.size() >= k)cout << v[k - 1] << endl;
	else cout << "-1\n";

	return 0;
}