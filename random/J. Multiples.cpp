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

	int a, b; cin >> a >> b;
	if (a > b)swap(a, b);
	if (gcd(a, b) == a)cout << "Multiples\n";
	else cout << "No Multiples\n";

	return 0;
}