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

	int t; cin >> t;
	int pos = 1;
	while (t--) {
		ll n, m; cin >> n >> m;
		ll ans = (n * m) / 2;
		cout << "Case " << pos++ << ": ";
		cout << ans << endl;
	}

	return 0;
}