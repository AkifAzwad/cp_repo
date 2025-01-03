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
	std::vector<int> a(n + 1), b(n + 1);
	for (int i = 1; i <= n; ++i) {
		int x; cin >> x;
		a[x] = i;
	}
	for (int i = 1; i <= n; ++i) {
		int x; cin >> x;
		b[x] = i;
	}


	std::map<int, int> cnt1;
	int mx1 = 0;
	for (int i = 1; i <= n; ++i) {
		int x1, x2, y1, y2;
		x1 = b[i] - a[i];
		y1 = b[i] - n - a[i];
		y2 = b[i] + n - a[i];
		if (abs(y1) > abs(y2)) {
			y1 = y2;
		}
		cnt1[x1]++;
		mx1 = max(mx1, cnt1[x1]);
		cnt1[y1]++;
		mx1 = max(mx1, cnt1[y1]);
		// mx2 = max(mx2, cnt2[y]);
		// cout << x1 << " " << y1 << endl;
	}
	cout << mx1;


	return 0;
}