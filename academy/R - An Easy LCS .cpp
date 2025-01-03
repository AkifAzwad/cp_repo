#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;



/////////constants/////////
//const int mod = 1e9 + 7;
const int N = 310;
string x, s;
string dp[N][N];
bool done[N][N];
int cnt[30];
//////////methods//////////
string fun(int i, int j) {
	if (i >= s.size() || j >= x.size()) {
		return "";
	}
	if (dp[i][j] != "")return dp[i][j];
	string ans;
	if (s[i] == x[j]) {
		ans = s[i] + fun(i + 1, j + 1);
	}
	else {
		string lcs1 = fun(i + 1, j);
		string lcs2 = fun(i, j + 1);
		if (lcs1.size() == lcs2.size()) {
			ans = min(lcs1, lcs2);
		} else if (lcs1.size() > lcs2.size()) {
			ans = lcs1;
		} else ans = lcs2;
	}
	done[i][j] = true;
	return dp[i][j] = ans;
}



///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);


	int t; cin >> t;
	int turn = 1;
	while (t--) {
		for (int i = 0; i < N; ++i) {
			for (int j = 0; j < N; ++j) {
				dp[i][j] = "";
			}
		}
		cin >> s >> x;
		string lcs = fun(0, 0);
		cout << "Case " << turn++ << ": ";
		if (lcs.size())cout << fun(0, 0) << endl;
		else cout << ":(\n";
	}


	return 0;
}