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
	int a[n], cnt = 0;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		if (a[i] % 2)cnt++;
	}
	if (cnt % 2 && n != 1)cout << "NO";
	else cout << "YES";

	return 0;
}