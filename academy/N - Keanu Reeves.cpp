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
	int zero = 0, one = 0;
	for (int i = 0; i < n; ++i) {
		if (s[i] == '0')zero++;
		else one++;
	}

	if (zero != one) {
		cout << "1\n";
		cout << s << endl;
	} else {
		char x = s[n - 1];
		s.pop_back();
		cout << "2\n";
		cout << s << " " << x << endl;

	}

	return 0;
}