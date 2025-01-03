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

int main()
{

	fast_io

	int i, j, k;
	int t;

	int n, m;
	cin >> n >> m;
	int a[n + 1]; FOR(i, 1, n + 1)cin >> a[i];

	int dp[n + 1][m + 1];
	FORN(i, n + 1)
	{
		FORN(j, m + 1)dp[i][j] = 0;
	}
	// dp[0][1]=1;
	// dp[0][1]=1;
	// dp[0][1]=1;

	int ans = 0;
	int num;
	FOR(i, 1, n + 1)
	{
		FOR(num, 1, m + 1)
		{
			if (a[i])
			{
				// dp[i][num] += dp[i - 1][num - 1];
				// dp[i][num] += dp[i - 1][num];
				// dp[i][num] += dp[i - 1][num + 1];
				// cout << "1 " << i << " " << num << endl;
				// cout << dp[i][num] << endl;
			}
			else
			{
				if (i > 1 && i < n )
				{
					// cout << "1 " << i << endl;

					if (a[i - 1]  && a[i + 1] )
					{
						if (abs(a[i + 1] - num) <= 1 && abs(a[i - 1] - num) <= 1)
						{
							ans = ((ans % mod) + 1) % mod;
						}
					}
					else if (!a[i - 1]  && !a[i + 1] )
					{
						ans = ((ans % mod) + 1) % mod;
					}
					else
					{
						if (a[i - 1] == 0)
						{
							if (abs(a[i + 1] - num) <= 1)ans = ((ans % mod) + 1) % mod;
						}
						else
						{
							if (abs(a[i - 1] - num) <= 1)ans = ((ans % mod) + 1) % mod;
						}
					}
				}
				else
				{
					// cout << "2 " << i << endl;
					if (i == 1)
					{
						if (i + 1 < n + 1)
						{
							if (abs(a[i + 1] - num)
							        <= 1)ans = ((ans % mod) + 1) % mod;
							else if (!a[i + 1])ans = ((ans % mod) + 1) % mod;
						}
						else
						{
							ans = ((ans % mod) + 1) % mod;
						}
					}
					else
					{
						if (i - 1 > 0)
						{
							if (abs(a[i - 1] - num)
							        <= 1)ans = ((ans % mod) + 1) % mod;
							else if (!a[i - 1])ans = ((ans % mod) + 1) % mod;
						}
						else
						{
							ans = ((ans % mod) + 1) % mod;
						}
					}
				}

				// if ((i + 1 < n + 1 && abs(a[i + 1] - num) <= 1
				//         && i - 1 > 0
				//         && abs(a[i - 1] - num) <= 1)
				// 	)dp[i][num] += dp[i - 1][num - 1] + 1;

				// || (i + 1 < n + 1 && !a[i + 1])
				//        || (i - 1 > 0 && !a[i - 1])

				// if (abs(a[i + 1] - num) <= 1 || (i + 1 < n + 1 && !a[i + 1]))dp[i][num] += dp[i - 1][num] + 1;


				// if (abs(a[i + 1] - num) <= 1 || (i + 1 < n + 1 && !a[i + 1]))dp[i][num] += dp[i - 1][num + 1] + 1;


				// cout  << i << " " << num << endl;
				// cout << dp[i][num] << endl;
				// ans += dp[i][num];
			}
		}
	}

	if (!ans)ans = 1;
	cout << ans << endl;

	return 0;
}