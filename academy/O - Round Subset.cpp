#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;


/////////constants/////////
//const int mod = 1e9 + 7;


//////////methods//////////
int n, k;
ll a[205];
int val[205][10];
// vector<std::pair<int, int> > dp[205][205];

std::pair<int, int>  fun(int i, int x, int y, int turn) {
	// cout << x << " " << y << endl;
	if (i == n)return {x, y};
	if (turn == k)return {x, y};
	// if (dp[i][turn] != -1)return dp[i][turn];
	int ans = 0;
	std::pair<int, int> p1, p2;
	p1 = fun(i + 1, x + val[i][2], y + val[i][5], turn + 1);
	p2 = fun(i + 1, x, y, turn);
	// int left = 0, right = 0;
	int left = min(p1.first, p1.second); int right = min(p2.first, p2.second);
	cout << left << " " << right << endl;
	std::pair<int, int> p = {left, right};
	return p;
}

///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	// memset(dp, -1, sizeof dp);
	cin >> n >> k;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	for (int i = 0; i < n; ++i) {
		ll num = a[i];
		int cnt = 0;
		while (num % 2 == 0) {
			cnt++;
			num /= 2;
		}
		val[i][2] = cnt;
		cnt = 0;
		while (num % 5 == 0) {
			cnt++;
			num /= 5;
		}
		val[i][5] = cnt;
	}

	// for (int i = 0; i < n; ++i) {
	// 	cout << i << "-> ";
	// 	cout << val[i][2] << " " << val[i][5] << endl;
	// }
	cout << endl;

	fun(0, 0, 0, 0);

	return 0;
}