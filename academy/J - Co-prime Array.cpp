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
	std::vector<int> v, ans;

	for (int i = 0; i < n; ++i) {
		int x; cin >> x;
		v.push_back(x);
		ans.push_back(x);
	}

	int cnt = 0, j = 0;
	for (int i = 0; i + 1 < n; ++i) {
		if (__gcd(v[i], v[i + 1]) != 1) {
			// cout << v[i] << " " << __gcd(v[i], v[i + 1]) << endl;
			ans.insert(ans.begin() + i + j + 1, 1);
			cnt++; j++;
		}
	}

	// if (n == 1 && v.back() != 1) {
	// 	ans.insert(ans.begin() + 1, 1);
	// 	cnt++;
	// }


	cout << cnt << endl;
	for (auto p : ans) {
		cout << p << " ";
	}



	return 0;
}