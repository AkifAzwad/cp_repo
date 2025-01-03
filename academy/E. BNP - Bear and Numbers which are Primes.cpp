#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;



/////////constants/////////
//const int mod = 1e9 + 7;
const int N = 1e7 + 9;
int hi = 0;
int num[N];
int f[N];

//////////methods//////////

void sieve() {
	int n = N;
	vector<bool> is_prime(n + 1, true);
	is_prime[0] = is_prime[1] = false;

	for (int i = 2; i <= n; i++) {
		if (is_prime[i]) {

			for (int j = i; j <= n; j += i) {
				is_prime[j] = false;
				f[i] += num[j];
			}
			// if (i <= 20)cout << i << " " << f[i] << endl;
		}
	}
}


///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n; cin >> n;
	int a[n];

	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		num[a[i]]++;
	}

	// cout << num[3] << endl;

	sieve();
	for (int i = 1; i <= N; ++i) {
		f[i] += f[i - 1];
		// cout << i << " " << f[i] << endl;
	}

	int m; cin >> m;
	while (m--) {
		int l, r;
		cin >> l >> r;
		r = min(N - 1, r);
		l = min(N - 1, l);
		// cout << r << " " << l << endl;
		cout << f[r] - f[l - 1] << endl;
	}

	return 0;
}