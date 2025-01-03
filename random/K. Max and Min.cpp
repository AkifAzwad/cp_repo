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

	int a, b, c; cin >> a >> b >> c;
	cout << min({a, b, c}) << " " << max({a, b, c}) << endl;

	return 0;
}