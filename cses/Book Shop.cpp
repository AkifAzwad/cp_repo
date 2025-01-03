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
typedef pair<string, string> pss;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<pii> vii;
typedef vector<ll> vl;
typedef vector<vl> vvl;
typedef vector<pll> vll;

//constants
double eps = 1e-9;
int inf = 1000000005;
int mod = 1000000007;
long long INFF = 1000000000000000005ll;
double PI = acos(-1);

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
#define mp make_pair
#define pb push_back
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define next next_permutation
#define perv prev_permutation
#define fast_io ios_base::sync_with_stdio(0);cin.tie(0);
#define setbit(x) __builtin_popcount(x)
#define ctz(x) __builtin_ctz(x)
#define clz(x) __builtin_clz(x)
#define lb lower_bound
#define ub upper_bound
#define bs binary_search
#define tc(t) while (t--)
#define pq priority_queue
//input,ouput
void cp()
{
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

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




int main()
{

	fast_io

	int i, j, k;
	int t;

	int n, x; cin >> n >> x;
	int a[n], b[n];
	FORN(i, n)cin >> a[i];
	FORN(i, n)cin >> b[i];


	int dp[n + 1][x + 1];

	FORN(i, n + 1)
	{
		FORN(j, x + 1)
		{
			dp[i][j] = 0;
		}
	}


	FOR(j, 1, n + 1)
	{

		FOR(i, 0, x + 1)
		{
			//dp[x][j]=dp[x-a[j]][j-1]+dp[x][j-1];
			int p1 = 0, p2 = 0;
			// if (j >= 1)


			if (i - a[j - 1] >= 0) {
				p1 = dp[j - 1][i - a[j - 1]] + b[j - 1];
			}

			p2 = dp[j - 1][i];
			// cout << p1 << " " << p2 << endl;
			dp[j][i] = max(p1, p2);

		}
		// cout << endl << endl;
	}

	cout << dp[n][x] << endl;
	return 0;
}