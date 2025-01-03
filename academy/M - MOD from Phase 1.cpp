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


ll pwr(ll a, ll b, ll m) {
	ll res = 1;
	while (b > 0) {
		if (b & 1)
			res = (res * a) % m;
		a = (a * a) % m;
		b >>= 1;
	}
	return res % m;
}

ll mulmod(ll a, ll b, ll mod) {
	ll x = 0, y = a % mod;
	while (b > 0) {
		if (b & 1)x = ((x % mod) + (y % mod)) % mod;
		b >>= 1;
		y = ((y % mod) * 2) % mod;
	}
	return (x + mod) % mod;
}

ll binpow(ll a, ll b, ll m) {
	a %= m;
	ll res = 1;
	while (b > 0) {
		if (b & 1)
			res = mulmod(res, a, m);
		a = mulmod(a, a, m);
		b >>= 1;
	}
	return res % m;
}





int main()
{

	fast_io

	ll i, j, k;
	ll t;
	ll a, b, p;


	cin >> a >> b >> p;
	// modDivide(a, b, m);
	ll x = binpow(a, b, p);
	ll y = mulmod(a, b, p);
	// ll z = ((a % p) * (binpow(b, p - 2, p))) % p;
	ll temp = (binpow(b, p - 2, p));
	ll z = mulmod(a, temp, p);


	cout << x << "\n" << y << "\n" << z << "\n";
	return 0;
}