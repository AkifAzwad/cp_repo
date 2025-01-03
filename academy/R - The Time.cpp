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

	int h, m;
	char ch;
	int x;
	cin >> h >> ch >> m;
	cin >> x;
	int xtra_h, xtra_m;

	xtra_m = (m + x) % 60;
	xtra_h = (m + x) / 60;
	h = (h + xtra_h) % 24; m = xtra_m;

	if (h < 10)cout << "0";
	cout << h;
	cout << ch;
	if (m < 10)cout << "0";
	cout << m << endl;

	return 0;
}