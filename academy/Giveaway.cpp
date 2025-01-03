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

	string a, b; cin >> a >> b;
	int cnt1[30] = {0}, cnt2[30] = {0};
	for (int i = 0; i < a.size(); ++i) {
		cnt1[a[i] - 'a']++;
	}
	for (int i = 0; i < b.size(); ++i) {
		cnt2[b[i] - 'a']++;
	}

	for (int i = 0; i < 30; ++i) {
		if (min(cnt2[i], cnt1[i])) {
			cout << "YES\n";
			return 0;
		}
	}
	cout << "NO\n";

	return 0;
}