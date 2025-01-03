
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


int main()
{

	fast_io

	ll i, j, k;
	ll t;

	cin >> t;
	tc(t)
	{
		ll n, q; cin >> n >> q;
		ll a[n]; FORN(i, n)cin >> a[i];
		ll b[n]; FORN(i, n)cin >> b[i];

		sort(a, a + n); sort(b, b + n);

		ll l, r, m;
		ll x, y;
		ll l1, l2, r1, r2, m1, m2;
		ll ans1 = 0, ans2 = 0;
		ll ans = 0;
		r = a[n - 1] + b[n - 1];
		l = a[0] + b[0];
		ll check[10005];
		k = 0;
		while (l <= r && k <= 10001) {

			// m = l + (r - l) / 2;
			m = l;
			ans1 = 0;
			ans = 0;

			l1 = 0, l2 = 0, r1 = n - 1, r2 = n - 1;
			ll mx;
			FORN(i, n)
			{
				m2 = i;
				l1 = 0, r1 = n - 1;
				ans1 = 0;
				while (l1 <= r1 )
				{
					m1 = l1 + (r1 - l1) / 2;
					if (a[m1] + b[m2] > m)r1 = m1 - 1;
					else {
						mx = (m1 + 1);
						ans1 = max(mx, ans1);
						l1 = m1 + 1;
					}
					// cout << m1 << " " << m2 << endl;
				}
				// cout << ans1 << endl;
				ans += ans1;
			}
			cout << m << " " << ans << endl;
			check[k++] = ans;
			l++;
		}
		// tc(q)
		// {

		// 	cin >> x;
		// 	cout << check[x + 1] << endl;
		// }


		// if (y != 1)cout << ans2 + 1 << endl;
		// else cout << ans2 << endl;


	}

	return 0;
}

