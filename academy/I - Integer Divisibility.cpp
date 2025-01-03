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

	int t;
	cin >> t;
	int turn = 1;
	while (t--)
	{
		int n, k, d;
		cin >> n >> d;
		int last = d;
		int num = d;
		int cnt = 1;
		int j = 1;
		int ten = 1;
		while (num % n) {
			int l, r;
			l = (d * 10 * ten) % n; r = last % n;
			num = (l + r) % n;
			// num = (last + num) % n;
			last = num;
			ten = (ten * 10) % n;
			cnt ++;
			// cout << l << " " << r << endl;
			// cout << num << endl;
			// if (cnt > 30)break;
		}
		cout << "Case " << turn++ << ": ";
		cout << cnt << endl;
	}

	return 0;
}