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

	int t; cin >> t;
	while (t--) {
		int n; cin >> n;

		std::vector<int> odd, even;
		for (int i = 0; i < 2 * n; ++i) {
			int num;
			cin >> num;
			if (num % 2)odd.push_back(i + 1); //change back to index
			else even.push_back(i + 1);
		}

		int cnt = 0;
		int last = (2 * n) - 2;
		while (!even.empty() && even.size() >= 2) {
			if (cnt == last)break;
			int x, y;
			x = even.back();
			even.pop_back();
			y = even.back();
			even.pop_back();
			cout << x << " " << y << endl;
			cnt += 2;
		}
		while (!odd.empty() && odd.size() >= 2) {
			if (cnt == last)break;
			int x, y;
			x = odd.back();
			odd.pop_back();
			y = odd.back();
			odd.pop_back();
			cout << x << " " << y << endl;
			cnt += 2;
		}
		cout << endl;
	}

	return 0;
}