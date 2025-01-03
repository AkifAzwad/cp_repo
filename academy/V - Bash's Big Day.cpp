#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;


/////////constants/////////
//const int mod = 1e9 + 7;
const int N = 1e5 + 9;
int spf[N];
int cnt[N];
//////////methods//////////


///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	for (int i = 2; i < N; i++) {
		spf[i] = i;
	}
	for (int i = 2; i < N; i++) {
		for (int j = i; j < N; j += i) {
			spf[j] = min(spf[j], i);
		}
	}


	int n; cin >> n;
	int a[n];
	int ans = 0;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	for (int i = 0; i < n; ++i) {
		int x = a[i];
		while (x > 1) {
			// cout << spf[x] << endl;
			cnt[spf[x]]++;
			ans = max(ans, cnt[spf[x]]);
			int prm = spf[x];
			while (x % prm == 0) {
				x /= prm;
			}
		}
		// cout << endl;
	}

	cout << max(ans, 1) << endl;

	return 0;
}