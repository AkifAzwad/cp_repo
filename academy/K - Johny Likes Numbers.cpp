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

	ll n, k; cin >> n >> k;
	ll num = 1;
	n++;
	num = (n / k) + (n % k != 0);

	cout << num*k << endl;

	return 0;
}