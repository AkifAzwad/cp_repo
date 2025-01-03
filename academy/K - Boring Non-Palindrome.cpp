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

	string s, x; cin >> s;
	int n = s.size();

	int l = 0, r = n - 1;
	for (int i = 0; i < n; ++i) {
		int len = r - l + 1;
		string temp;
		temp = s.substr(l, len);
		x = temp;
		reverse(x.begin(), x.end());
		if (x == temp) {
			break;
		}
		l++;
	}

	string xtra;
	for (int i = 0; i < l; ++i) {
		xtra += s[i];
	}
	reverse(xtra.begin(), xtra.end());
	s += xtra;
	cout << s << endl;

	return 0;
}