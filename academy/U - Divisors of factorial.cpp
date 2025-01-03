#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;
#define valid(nx,ny) nx>=1 && nx<=row && ny>=1 && ny<=col
#define int long long

/////direction_array///////
int fx1[] = { +1, -1, +0, +0}; //straight
int fy1[] = { +0, +0, +1, -1};
int fx2[] = { +0, +0, +1, -1, -1, +1, -1, +1}; //and diagonally
int fy2[] = { -1, +1, +0, +0, +1, +1, -1, -1};


/////////constants/////////
ll M = 1e9 + 7;
const int mxn = 5e4 + 100;
vector <ll> prime;
ll mark[mxn + 9];
//////////methods//////////
void sieve() {
	for (ll i = 2; i * i <= mxn; i++)
	{
		if (!mark[i])
		{
			for (ll j = i * i; j <= mxn; j += i)
				mark[j] = 1;
		}
	}
	for (ll i = 2; i <= mxn; i++)
		if (!mark[i])prime.push_back(i);
}
ll int mulmod(ll int a, ll int b) {
	if (M <= 1000000009) return a * b % M;

	ll int res = 0;
	while (a > 0) {
		if (a & 1) {
			res += b;
			if (res >= M) res -= M;
		}
		a >>= 1;
		b <<= 1;
		if (b >= M) b -= M;
	}
	return res;
}
///////////////////////////
signed main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);




	sieve();
	int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		int x = n;
		int ans = 1;
		for (int i = 0; i < prime.size(); ++i) {
			int prm = prime[i];
			int cnt = 0;
			while (x / prm) {
				cnt += (x / prm);
				prm *= prime[i];
			}
			if (cnt) {
				// ans *= (cnt + 1);
				ans = mulmod(ans, cnt + 1);
			}
		}
		cout << ans << endl;
	}


	return 0;
}