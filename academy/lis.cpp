#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;



/////////constants/////////
//const int mod = 1e9 + 7;
const int N = 2e5 + 100;
int a[N], dp[N];
std::vector<int> v;

//////////methods//////////
int lis(vector<int> const& a) {
	int n = a.size();
	const int INF = 1e9;
	vector<int> d(n + 1, INF);
	d[0] = -INF;

	for (int i = 0; i < n; i++) {
		int j = upper_bound(d.begin(), d.end(), a[i]) - d.begin();
		if (d[j - 1] < a[i] && a[i] < d[j])
			d[j] = a[i];
	}

	int ans = 0;
	for (int i = 0; i <= n; i++) {
		if (d[i] < INF)
			ans = i;
	}
	return ans;
}



///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n; cin >> n;
	for (int i = 1; i <= n; ++i) {
		cin >> a[i];
		v.push_back(a[i]);
	}



	cout << lis(v) << endl;
	return 0;
}