#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;



/////////constants/////////
//const int mod = 1e9 + 7;
const int N = 2e5 + 100;
int vis[N];
std::vector<int> v[N];
int a[N];
//////////methods//////////



///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n; cin >> n;
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
	}

	for (int i = 1; i <= n; ++i) {
		if (i + a[i] <= n) {
			// cout << i << " " << i + a[i] << endl;
			v[i].push_back(i + a[i]);
		}
		if (i - a[i] >= 1) {
			// cout << i << " " << i - a[i] << endl;
			v[i].push_back(i - a[i]);
		}
	}

	for (int i = 1; i <= n; ++i) {
		if (v[i].size()) {
			cout << abs(v[i][0] - i) / a[i] << " ";
		} else {
			cout << "-1 ";
		}
	}
	cout << endl;

	return 0;
}