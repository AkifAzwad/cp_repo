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
	string a, b; cin >> a >> b;


	int j = a.size() - 1;
	int len = 0, cnt = 0;
	for (int i = 0; i < b.size(); ++i) {
		len++;
		string x, y;
		x = a.substr(j, len);
		y = b.substr(0, len);
		// cout << x << " " << y << endl;
		if (x == y) {
			cnt = len;
			// break;
		}
		j--;
	}

	cout << 2 * n - cnt << endl;

	return 0;
}