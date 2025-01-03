#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;


/////////constants/////////
//const int mod = 1e9 + 7;
const int N = 1e5 + 9;
int spf[N];

//////////methods//////////


///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	for (int i = 2; i < N; i++) {
		spf[i] = i;
	}
	for (int i = 2; i < N; i++) {
		for (int j = i; j < N; j += i) {
			spf[j] = min(spf[j], i);
		}
	}


	int n, k; cin >> n >> k;
	if (k == 1) {
		cout << n << endl;
		return 0;
	}
	int x = n;
	int sum = 0;
	std::vector<int> ans;
	while (x > 1) {
		ans.push_back(spf[x]);
		sum ++;
		x /= spf[x];
		if (sum == k - 1)break;
	}

	if (sum < k - 1 || x == 1)cout << "-1\n";
	else {
		for (auto p : ans) {
			cout << p << " ";
		}
		if (x != 1)cout << x;

	}
	return 0;
}