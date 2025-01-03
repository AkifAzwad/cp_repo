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

	char X ; cin >> X;
	(X >= 'a' && X <= 'z') ? cout << char(X - 32) : cout << char(X + 32);

	return 0;
}