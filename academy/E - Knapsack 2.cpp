#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;



/////////constants/////////
//const int mod = 1e9 + 7;
const int N = 200;
const int V = 1e5 + 100;
ll a[N], b[N];
ll dp[N][V];
ll n, weight;
ll mx;
//////////methods//////////
ll fun(int pos, int v) { //min weight needed to get this value
	cout << pos << " " << v << endl;


}


///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cin >> n >> weight;
	for (int i = 0; i < n; ++i) {
		cin >> a[i] >> b[i];
	}
	memset(dp, -1, sizeof(dp));
	fun(0, 0);
	cout << mx << endl;
	return 0;
}