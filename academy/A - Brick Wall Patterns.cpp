#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;


/////////constants/////////
//const int mod = 1e9 + 7;


//////////methods//////////
int n;
int fun(int i, int last) {
	if (i == n) {
		if (last)return 1;
		else return 0;
	}
	return fun(i + 1, 0) + fun(i + 1, 1) ;
}

///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);


	while (cin >> n) {
		if (n == 0)break;
		int ans = 1;

		// ans--;
		cout << fun(1, 0) << endl;
	}

	return 0;
}