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
	string s; cin >> s;
	int ans = 0;
	for (int i = 0; i < n; ++i) {
		int num = s[i] - '0';
		if (num % 2 == 0)ans += (i + 1);
	}
	cout << ans << endl;

	return 0;
}