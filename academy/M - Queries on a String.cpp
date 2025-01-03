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
	int m; cin >> m;
	while (m--) {
		int l, r, k; cin >> l >> r >> k;
		int len = r - l + 1;
		string temp = s;
		int j = 0;
		for (int i = l - 1; i < r; ++i) {
			int pos = (j + k) % len;
			temp[pos] = s[i];
			j++;
		}
		j = 0;
		for (int i = l - 1; i < r; ++i) {
			s[i] = temp[j];
			j++;
		}
	}
	cout << s << endl;
	return 0;
}