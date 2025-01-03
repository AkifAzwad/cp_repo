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
	int mx = 0;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		mx = max(a[i], mx);
	}

	int num = 0;
	for (int i = 0; i + 1 < n; ++i) {
		if (a[i] > a[i + 1]) {
			num = a[i];
			break;
		}
	}

	if (num) {
		for (int i = 0; i < n; ++i) {
			if (num != a[i])cout << a[i] << " ";
		}
	} else {
		for (int i = 0; i < n; ++i) {
			if (mx != a[i])cout << a[i] << " ";
		}
	}

	return 0;
}