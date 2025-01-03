#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;


/////////constants/////////
//const int mod = 1e9 + 7;
/////direction_array///////
#define valid(nx,ny) nx>=1 && nx<=row && ny>=1 && ny<=col
int fx1[] = { +1, -1, +0, +0}; //straight
int fy1[] = { +0, +0, +1, -1};
std::map<char, int> mp;
string s;
int n;
int x, y;

//////////methods//////////

///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	mp['R'] = 0; mp['L'] = 1; mp['D'] = 2; mp['U'] = 3;
	cin >> n;
	cin >> s;
	for (int i = 0; i < n; ++i) {
		int dx, dy;
		dx = fx1[mp[s[i]]]; dy = fy1[mp[s[i]]];
		x += dx;
		y += dy;
		// cout << x << " " << y << endl;
	}
	int ans = abs(x) + abs(y);
	cout << n - ans << endl;

	return 0;
}