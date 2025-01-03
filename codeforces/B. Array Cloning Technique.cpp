#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;


/////////constants/////////
//const int mod = 1e9 + 7;


//////////methods//////////
int check(int val, int n)
{
	int ans = 0;
	if (val <= n)ans += 1 + val;
	else {
		int rem = n;
		ans += 1 + rem;
	}
	return ans;
}

///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int a[n];
		std::map<int, int> mp1;
		int val = 0;
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
			mp1[a[i]]++;
			val = max(mp1[a[i]], val);
		}
		int ans = 0;

		while (n > 0)
		{
			int temp = check(val, n);
			ans += temp;
			val += temp - 1;

			cout << n << " " << val << endl;
			cout << ans << endl;
			// if (n == 1)break;
			if (n - val >= 0)n -= val;
			else {
				ans += n;
				break;
				// n = 1;
			}
		}
		cout << ans << endl;
	}

	return 0;
}