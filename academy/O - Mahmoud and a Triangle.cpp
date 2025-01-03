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


	int n; cin >> n;
	int a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	sort(a, a + n);

	for (int i = 0; i + 2 < n; ++i) {
		int sum = a[i] + a[i + 1];
		if (sum > a[i + 2]) {
			cout << "YES\n";
			return 0;
		}
	}
	cout << "NO\n";


	return 0;
}