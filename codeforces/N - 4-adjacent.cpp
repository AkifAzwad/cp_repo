#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;
#define valid(nx,ny) nx>=1 && nx<=row && ny>=1 && ny<=col


/////direction_array///////
int fx1[] = { +1, -1, +0, +0}; //straight
int fy1[] = { +0, +0, +1, -1};
int fx2[] = { +0, +0, +1, -1, -1, +1, -1, +1}; //and diagonally
int fy2[] = { -1, +1, +0, +0, +1, +1, -1, -1};


/////////constants/////////
//const int mod = 1e9 + 7;


//////////methods//////////


///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n; cin >> n;
	ll cnt = 0, cnt1 = 0;
	ll a[n];
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
		if (a[i] % 4 == 0)cnt++;
		else if (a[i] % 2 != 0)cnt1++;
	}
	if (cnt1 + cnt == n && cnt >= cnt1 - 1)cout << "Yes\n";
	else if (cnt1 + cnt < n && cnt == cnt1)cout << "Yes\n";
	else cout << "No\n";


	return 0;
}