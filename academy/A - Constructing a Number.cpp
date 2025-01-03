#include "bits/stdc++.h" // Include every standard library 
using namespace std;


///////////////data types//////////////////
typedef long long ll;



///////////methods lowerCamelCase//////////



/////////constants lowerCamelCase/////////
//const int mod = 1e9 + 7;



/////////////////////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;
		ll a[n], sum = 0;
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
			sum += (a[i] % 9);
		}


		if (sum % 3 == 0)cout << "Yes\n";
		else cout << "No\n";
	}


	return 0;
}