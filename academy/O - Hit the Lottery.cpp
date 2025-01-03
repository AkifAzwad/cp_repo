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

	int a[] = {1, 5, 10, 20, 100};
	int ans = 0;

	int n; cin >> n;
	for (int i = 4; i > -1; --i) {
		if (n >= a[i])ans += n / a[i];
		n -= a[i] * (n / a[i]);
	}

	cout << ans << endl;

	return 0;
}