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

	int n, k; cin >> n >> k;
	string s; cin >> s;

	int mn = 1e5;
	int cnt[30] = {0};
	for (int i = 0; i < n; ++i) {
		cnt[s[i] - 'A']++;
	}

	for (int i = 0; i < k; ++i) {
		mn = min(cnt[i], mn);
	}

	cout << mn*k << endl;

	return 0;
}