#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;



/////////constants/////////
//const int mod = 1e9 + 7;
const int N = 1e6 + 100;
int dp[N];


//////////methods//////////
int min_steps(int n) { //min steps for n to reach 0
	if (n < 0) {
		return 9e6;
	}
	if (n == 0)return 0;
	if (dp[n] != -1)return dp[n];
	int temp = n;
	std::vector<int> v;
	while (temp != 0) {
		if (temp % 10 != 0)v.push_back(temp % 10);
		temp /= 10;
	}
	int mn = INT_MAX;
	for (int i = 0; i < v.size(); ++i) {
		// cout << n << " " << v[i] << endl;
		mn = min(mn, 1 + min_steps(n - v[i]));
	}
	return dp[n] = mn;
}


///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n; cin >> n;

	memset(dp, -1, sizeof(dp));
	cout << min_steps(n);

	return 0;
}