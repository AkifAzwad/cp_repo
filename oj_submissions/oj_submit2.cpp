#include "bits/stdc++.h"
using namespace std;

using ll = long long;


int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	//freopen("icecream.in", "r", stdin);

	int t; cin >> t;
	while (t--) {
		int x1, y1; cin >> x1 >> y1;
		int x2, y2; cin >> x2 >> y2;
		if (x2 >= y2 and x1 <= y2)cout << "NO\n";
		else if (y2 >= x2 and y1 <= x2)cout << "NO\n";
		else cout << "YES\n";

	}

	return 0;
}