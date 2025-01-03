#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;


/////////constants/////////
//const int mod = 1e9 + 7;


//////////methods//////////
bool comp(const pair<int, int> &p1,
          const pair<int, int> &p2)
{
	return p1.second > p2.second;
}

///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	// freopen("icecream.in","r",stdin);

	int t; cin >> t;
	while (t--) {
		int n, k; cin >> n >> k;
		std::vector<std::pair<int, int> > v(n);
		for (int i = 0; i < n; ++i) {
			cin >> v[i].first;
		}
		for (int i = 0; i < n; ++i) {
			cin >> v[i].second;
		}
		sort(v.begin(), v.end());
		int mx = 0;
		for (int i = 0; i < k; ++i) {
			mx = max(mx, v[i].first);
		}
		sort(v.begin(), v.end(), comp);

		ll sum = 0;
		for (int i = 0; i < n; ++i) {
			if (v[i].first <= mx && k) {
				sum += v[i].second;
				k--;
			}
		}
		cout << mx << " " << sum << "\n";

	}

	return 0;
}