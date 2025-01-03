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

	int n, k; cin >> n >> k;
	int a[n + 1];
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
	}


	int cnt = 0;
	int l = 1, mx = 0;
	int left = 1, right = n;
	for (int i = 1; i <= n; ++i) {
		if (a[i] == 0)cnt++;
		if (cnt > k) {
			while (l <= i) {
				if (a[l] == 0)cnt--;
				l++;
				if (cnt <= k)break;
			}
		} else {
			int cur = i - l + 1;
			if (cur > mx) {
				left = l; right = i;
				mx = cur;
			}
		}
		// cout << l << " " << mx << endl;
	}

	cout << mx << endl;
	if (mx == 0)left = right = 0;
	for (int i = 1; i <= n; ++i) {
		if (i >= left && i <= right)cout << "1 ";
		else cout << a[i] << " ";
	}
	cout << endl;



	return 0;
}