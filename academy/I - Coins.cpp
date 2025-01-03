#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;



/////////constants/////////
//const int mod = 1e9 + 7;
const int N = 3010;
double p[N], n;
double dp[N][N];
bool done[N][N];
//////////methods//////////
double fun(int i, int head, int tail) {
	if (i == n) {
		if (head > tail)return 1;
		else return 0;
	}
	if (done[i][head])return dp[i][head];
	done[i][head] = true;
	double ans;
	ans = p[i] * fun(i + 1, head + 1, tail);
	ans += (1 - p[i]) * fun(i + 1, head, tail + 1);
	return dp[i][head] = ans;
}


///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);


	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> p[i];
	}

	cout << fixed << setprecision(10) << fun(0, 0, 0) << endl;;

	return 0;
}