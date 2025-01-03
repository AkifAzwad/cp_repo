#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;


/////////constants/////////
//const int mod = 1e9 + 7;
const int N = 2e5 + 9;
int a[N];
//////////methods//////////


///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n; cin >> n;
	std::vector<int> zeros;
	int left[n + 5] = {0}, right[n + 5] = {0};

	for (int i = 0; i < n + 5; ++i) {
		left[i] = 1e9;
		right[i] = 1e9;
	}

	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
		if (a[i] == 0) {
			left[i] = i;
		} else  left[i] = left[i - 1];

	}

	for (int i = n; i > 0; --i) {
		if (a[i] == 0) {
			right[i] = i;
		} else  right[i] = right[i + 1];
	}

	// for (int i = 1; i <= n; ++i) {
	// 	cout << left[i] << " " << right[i] << endl;
	// }


	for (int i = 1; i <= n; ++i) {
		int l, r;
		l = left[i]; r = right[i];
		cout << min(abs(l - i), abs(r - i)) << " ";
	}

	return 0;
}