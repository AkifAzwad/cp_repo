#include "bits/stdc++.h"
using namespace std;


/////////data types/////////

#define ll long long

/////////constants/////////
//const int mod = 1e9 + 7;


//////////methods//////////


///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string s; cin >> s;
	ll n = s.size();
	reverse(s.begin(), s.end());
	__int128 ans = 0, num = 1;
	__int128 cur = 0;
	for (int i = 0; i < n; ++i) {
		if (s[i] == '1')cur += num;
		num *= 2;
	}
	// cout << cur << endl;
	cur--;
	ll cnt = 0;
	while (cur > 0) {
		cnt++;
		cur /= 4;
	}
	cout << cnt << endl;

	return 0;
}