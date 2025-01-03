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
	sort(s.begin(), s.end());
	int cnt[30] = {0};
	for (int i = 0; i < n; ++i) {
		cnt[s[i] - 'a']++;
	}
	// ll sum = 0;
	// for (int i = 0; i < 30; ++i) {
	// 	sum += (cnt[i] * cnt[i] + cnt[i]) / 2;
	// }
	// cout << sum << endl;
	cout << s << endl;

	return 0;
}