#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;



/////////constants/////////
const int mod = 1e9 + 7, N = 1e5 + 100;
int n;
int a[N];
double mx;
//////////methods//////////
double fun1(int i, int sum, int cnt) {
	cout << i << " " << sum << " " << cnt << endl;
	if (i == n) {
		if (cnt == 0)return 0;
		double val = sum / cnt;
		return val;
	}
	if (i >= n) {
		return 0;
	}
	double ans;
	ans = fun1(i + 1, sum, cnt);//dont take ith num
	ans = max(fun1(i + 2, sum + a[i], cnt + 1), ans);// take ith num
	cout << endl;
	mx = max(ans, mx);
	return ans;
}


///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}

	cout << fun1(0, 0, 0) << endl;

	cout << mx << endl;
	return 0;
}