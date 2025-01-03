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
	int cnt = 0;
	for (int i = 1; i <= n; ++i) {
		for (int j = 1; i * j <= n; ++j) {
			for (int k = 1; i * j * k <= n; ++k) {
				cnt++;
			}
		}
	}

	cout << cnt << endl;

	return 0;
}