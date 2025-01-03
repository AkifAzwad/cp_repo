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

	string s, ans; cin >> s;
	int n = s.size();
	int cnt[30] = {0};
	for (int i = 0; i < n; ++i) {
		cnt[s[i] - 'a']++;
	}
	for (int i = 0; i < 25; ++i) {
		int num = cnt[i];
		cnt[i + 1] += (cnt[i] / 2);
		cnt[i] = num % 2;
	}
	char ch = 'a';
	for (int i = 0; i < 26; ++i) {
		// cout << cnt[i] << endl;
		for (int j = 0; j < cnt[i]; ++j) {
			ans += ch;
		}
		ch++;
	}
	sort(ans.begin(), ans.end(), greater<int>());
	cout << ans;

	return 0;
}