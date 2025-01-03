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

	ll i, j, k;
	ll t;


	cin >> t;
	tc(t) {
		ll n, a, b, c; cin >> n >> a >> b >> c;
		vector<ll> divs;
		for (ll i = 1; i * i <= n; i++) {
			if (n % i == 0) {
				if (i <= 1e6)divs.push_back(i);
				if (i != n / i && n / i <= 1e6) divs.push_back(n / i);
			}
		}
		// sort(divs.begin(), divs.end());

		ll ans = 0;
		for ( i = 0; i < divs.size(); ++i)
		{
			for ( j = 0; j < divs.size(); ++j)
			{
				for ( k = 0; k < divs.size(); ++k)
				{
					if (divs[i] <= a) {
						if (divs[j] <= b) {
							if (divs[k] <= c) {
								if (divs[i]*divs[j]*divs[k] == n) {
									ans++;
								}
							}
						}
					}
				}
			}
		}


		cout << ans << endl;

	}

	return 0;
}