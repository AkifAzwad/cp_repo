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

	int n, m;
	cin >> n;
	int a[n];
	int mx1 = 0;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		mx1 = max(a[i], mx1);
	}

	cin >> m;
	int b[m];
	int mx2 = 0;
	for (int i = 0; i < m; ++i) {
		cin >> b[i];
		mx2 = max(b[i], mx2);
	}


	cout << mx1 << " " << mx2 << endl;




	return 0;
}