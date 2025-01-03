#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;
#define int long long


/////////constants/////////
//const int mod = 1e9 + 7;
const int N = 2e5 + 100;
int a[N], d[N];
std::vector<std::pair<int, int> > v, v1;

//////////methods//////////
bool sortbysec(const pair<int, int> &a,
               const pair<int, int> &b)
{
	return (a.second < b.second);
}



///////////////////////////
signed main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	v.push_back({0, 0}); v1.push_back({0, 0});
	int n, q; cin >> n >> q;
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
		v.push_back({a[i], i});
	}
	for (int i = 1; i <= q; ++i) {
		int l, r;
		cin >> l >> r;
		d[l]++; d[r + 1]--;
	}
	for (int i = 1; i <= n; ++i) {
		d[i] += d[i - 1];
		v1.push_back({d[i], i});
	}

	sort(v.begin(), v.end());
	sort(v1.begin(), v1.end());
	for (int i = 1; i <= n; ++i) {
		// cout << v[i].first << " " << v1[i].first << endl;
		v[i].second = v1[i].second;
	}

	sort(v.begin(), v.end(), sortbysec);
	int sum = 0;
	for (int i = 1; i <= n; ++i) {
		// cout << v[i].first << " ";
		sum += v[i].first * d[i];
	}
	cout << sum;

	return 0;
}