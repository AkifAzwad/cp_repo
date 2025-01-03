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
	if (n <= 2)cout << "No";
	else {
		cout << "Yes\n";
		cout << "1 " << n << "\n";
		n--;
		cout << n << " ";
		for (int i = 1; i <= n; ++i) {
			cout << i << " ";
		}
	}

	return 0;
}