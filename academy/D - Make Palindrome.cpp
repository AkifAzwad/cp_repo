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

	string s; cin >> s;
	int n = s.size();
	int cnt[30] = {0};
	for (int i = 0; i < n; ++i) {
		cnt[s[i] - 'a']++;
	}

	int mid = -1;
	for (int i = 0; i < 30; ++i) {
		if (cnt[i] & 1) {
			int pos = -1;
			for (int j = 30; j > i; j--) {
				if (cnt[j] & 1) {
					pos = j;
					break;
				}
			}
			if (pos == -1)mid = i;
			else cnt[i]++, cnt[pos]--;
		}
	}

	string ans, temp;
	for (int i = 0; i < 30; ++i) {
		for (int j = 0; j < cnt[i] / 2; ++j) {
			ans += 'a' + i;
		}
	}
	temp = ans;
	reverse(temp.begin(), temp.end());
	if (mid != -1) {
		ans += ('a' + mid);
	}
	ans += temp;
	cout << ans << "\n";

	return 0;
}