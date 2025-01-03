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

	int x = a[0], y = a[n - 1];
	int cnt1 = 0, cnt2 = 0;
	for (int i = 0; i < n; ++i) {
		if (a[i] != x)cnt1 = i + 1;
	}
	for (int i = n - 1; i > -1 ; --i) {
		if (a[i] != y)cnt2 = i + 1;
	}



	cout << max(cnt1 - 1, n - cnt2);

	return 0;
}