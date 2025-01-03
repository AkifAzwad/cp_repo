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

	int t;
	cin >> t;
	while (t--) {
		int n, k;
		std::vector<ll> nums;
		cin >> k >> n;
		for (int i = 0; i < n; ++i) {
			int x;
			cin >> x;
			nums.push_back(x);
		}

		ll pre[k];
		memset(pre, 0, sizeof(pre));
		ll sum = 0;
		ll ans = 0;
		for (int i = 0; i < nums.size(); i++) {
			nums[i] = nums[i] % k;
			if (nums[i] < 0)nums[i] += k;
		}
		for (int i = 0; i < nums.size(); i++) {
			ll p = nums[i];
			sum += p;
			ll a = sum % k;
			if (a == 0)ans++;
			ans += pre[a];
			pre[a]++;
		}

		cout << ans << endl;

	}




	return 0;
}