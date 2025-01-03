#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;


/////////constants/////////
//const int mod = 1e9 + 7;
const int N = 1e7 + 9;
bool f[N];

//////////methods//////////


///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int num = N - 9;
	f[1] = true;
	for (int i = 2; i <= num; i++) {
		if (!f[i]) {
			for (int j = i + i; j <= num; j += i) {
				f[j] = true;
			}
		}
	}

	int n; cin >> n;
	int mx = 1e9;
	for (int i = 2; i <= num; ++i) {
		if (f[i]) {
			int l, r;
			l = i;
			r = n + i;
			if (f[l] && f[r] && l <= mx && r <= mx) {
				cout << r << " " << l << endl;
				return 0;
			}
		}
	}


	return 0;
}