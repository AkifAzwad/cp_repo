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
	int odd = 0, even = 0;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		odd += (a[i] % 2);
	}
	even = n - odd;

	if (even != 0 && odd != 0) {
		sort(a, a + n);
	}
	for (int i = 0; i < n; ++i) {
		cout << a[i] << " ";
	} cout << endl;

	return 0;
}