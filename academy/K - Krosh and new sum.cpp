#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;
#define int ll

/////////constants/////////
const int mod = 1e9 + 7;


//////////methods//////////


///////////////////////////
signed main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n; cin >> n;
	int a[n], ans = 0;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	sort(a, a + n, greater<int> ());
	for (int i = 0; i < n; ++i) {
		int num1 =  a[i] * a[i];
		num1 %= mod;
		num1 *= (n - i - 1);
		ans = ((ans % mod) + (num1 % mod)) % mod;
		int num2 = a[i] * a[i];
		num2 %= mod;
		num2 *= i;
		ans = (ans % mod - num2 % mod) % mod;
		if (ans < 0)ans += mod;
		// ans %= mod;
	}
	cout << abs(ans) << endl;

	return 0;
}