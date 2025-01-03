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
	int a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	sort(a, a + n, greater<int>());
	std::vector<int> hi, lo;
	int lim = (n / 2) ;
	for (int i = 0; i < n; ++i) {
		if (i < lim)hi.push_back(a[i]);
		else lo.push_back(a[i]);
	}
	// sort(hi.begin(), hi.end(), greater<int>());
	// for (auto p : lo) {
	// 	cout << p << " ";
	// } cout << endl;
	// for (auto p : hi) {
	// 	cout << p << " ";
	// } cout << endl;

	int l = 0, r = 0;
	std::vector<int> ans;
	for (int i = 0; i < n; ++i) {
		if (i % 2)ans.push_back(hi[l++]);
		else ans.push_back(lo[r++]);
	}

	int found = 0;
	for (int i = 1; i + 1 < ans.size(); ++i) {
		if (i % 2) {
			if (ans[i] <= ans[i - 1] || ans[i] <= ans[i + 1])found = 1;
		} else {
			if (ans[i] >= ans[i - 1] || ans[i] >= ans[i + 1])found = 1;
		}
		// cout << i << " " << found << endl;
	}

	if (found)cout << "-1\n";
	else {
		for (auto p : ans) {
			cout << p << " ";
		}

	}



	return 0;
}