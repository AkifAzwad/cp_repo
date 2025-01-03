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
	int N = 3e3 + 9;
	int f[N];
	int num = N - 9;

	f[1] = 1;
	for (int i = 2; i <= num; i++) {
		if (!f[i]) {

			for (int j = i + i; j <= num; j += i) {
				f[j] = 1;
			}
		}
	}

	int n; cin >> n;
	int ans = 0;
	for (int i = 1; i <= n; ++i) {
		int cnt = 0;
		for (int j = 2; j <= n; ++j) {
			if (!f[j] && i % j == 0)cnt++;
		}
		if (cnt == 2)ans++;
	}
	cout << ans << endl;;

	return 0;
}