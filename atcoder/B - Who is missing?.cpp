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
	int a[n + 10] = {0};
	for (int i = 0; i < (4 * n) - 1; ++i) {
		int x;
		cin >> x;
		a[x]++;
	}

	int ans = 0;
	for (int i = 1; i <= n; ++i) {
		// cout << a[i] << " ";
		if (a[i] != 4) {
			ans = i;
			break;
		}
	}
	cout << ans << endl;
	return 0;
}