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

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		string s; cin >> s;
		string x = s;
		sort(x.begin(), x.end());
		int cnt = 0;
		for (int i = 0; i < n; ++i) {
			if (s[i] != x[i])cnt++;
		}
		cout << cnt << endl;
	}

	return 0;
}