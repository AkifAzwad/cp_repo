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

	int t;
	cin >> t;
	int pos = 1;
	while (t--) {
		cout << "Case " << pos++ << ": ";
		string a;
		int b;

		cin >> a >> b;

		int res = 0;
		for (int i = 0; i < a.size(); ++i) {
			if (a[i] != '-')res = ((res * 10LL) % b + (a[i] - '0')) % b;
		}

		if (res == 0) {
			cout << "divisible\n";
		} else cout << "not divisible\n";

	}

	return 0;
}