#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;



/////////constants/////////
//const int mod = 1e9 + 7;
const int N = 1e5 + 100;
int pre[N];
int a[N];
int n;
//////////methods//////////



///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int t; cin >> t;
	while (t--) {
		memset(pre, 0, sizeof pre);

		cin >> n;
		for (int i = 1; i <= n; ++i) {
			cin >> a[i];
			a[i] %= n;
			pre[i] = pre[i - 1] + a[i];
			pre[i] %= n;
		}
		int x = 1, y = 1;
		unordered_map<int, int> map;
		for (int i = 1; i <= n; ++i) {


			if (pre[i] == 0) {
				x = 0; y = i;
				break;
			}
			else if (map.count(pre[i])) {
				x = map[pre[i]];
				y = i;
				break;
			} else {
				map[pre[i]] = i;
			}
		}
		if (y - x != 0) {
			cout << y - x << endl;
			for (int i = x + 1; i <= y; ++i) {
				cout << i << " ";
			}
			cout << endl;
		} else cout << "-1\n";

	}



	return 0;
}