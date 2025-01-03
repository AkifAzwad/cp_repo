#include <bits/stdc++.h> // Include every standard library 
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define o_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>


//data types
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vii;
typedef vector<pll> vll;

//constants
const double eps = 1e-9;
const int inf = 2e9 + 5;
const int mod = 1e9 + 7;
const long long INFF = LLONG_MAX;
const double PI = acos(-1);

//loops
#define FOR(i,a,b) for ( i = (a); i < (b); ++i)
#define FORN(i,a) FOR(i,0,a)
#define ROF(i,a,b) for ( i = (b)-1; i >= (a); --i)
#define ROFN(i,a) ROF(i,0,a)
#define trav(a,x) for (auto& a: x)

//helpful functions
#define mem(a, b) memset(a, b, sizeof(a))
#define ff first
#define ss second
#define pb push_back
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define lb lower_bound
#define ub upper_bound
#define bs binary_search
#define tc(t) while (t--)
#define pq priority_queue
//input,ouput


ll pwr(ll a, ll b) {
	ll res = 1;
	while (b > 0) {
		if (b & 1)
			res = res * a;
		a = a * a;
		b >>= 1;
	}
	return res;
}

const int n = 200001;
int prefix[n][21];
int main()
{

	fast_io

	int i, j, k;
	int t;

	// bool cnt[n][32];

	for (i = 1; i < n; ++i)
	{
		for ( j = 20; j >= 0; --j)
		{

			int k = i >> j;
			if (k & 1)
			{
				// cout << "1";
				prefix[i][j] = prefix[i - 1][j];
			}
			else
			{
				// cout << "0";
				prefix[i][j] = prefix[i - 1][j] + 1;
			}
			// cout << prefix[i][j];

		}
		// cout << endl;

	}


	cin >> t;
	tc(t)
	{
		int l, r;
		cin >> l >> r;
		int mn = inf;

		for (int i = 0; i < 21; ++i)
		{
			int sum = prefix[r][i] - prefix[l - 1][i];
			// cout << prefix[r][i] << " " << prefix[l][i] << endl;
			mn = min(sum, mn);
		}

		cout << mn << endl;
	}

	return 0;
}