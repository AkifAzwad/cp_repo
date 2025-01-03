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
	int a[n + 1] = {0};
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
	}

	sort(a, a + n + 1);


	int j = 1, k = n;
	cout << a[j++] << " ";
	for (int i = 2; i <= n; ++i) {
		if (i % 2 == 0) {
			cout << a[k--] << " ";
		} else cout << a[j++] << " ";
	}


	return 0;
}