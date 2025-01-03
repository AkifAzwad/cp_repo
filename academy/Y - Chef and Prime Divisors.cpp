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

void primeFactors(ll a, ll n)
{
	// Prll the number of 2s that divide n
	int found = 0;
	set <ll> v;
	while (n % 2 == 0)
	{
		// cout << 2 << " ";
		v.insert(2);
		n = n / 2;
	}

	// n must be odd at this poll. So we can skip
	// one element (Note i = i +2)
	for (ll i = 3; i * i <= (n); i = i + 2)
	{
		// While i divides n, prll i and divide n
		while (n % i == 0)
		{
			// cout << i << " ";
			v.insert(i);

			n = n / i;
		}
	}

	// This condition is to handle the case when n
	// is a prime number greater than 2
	if (n > 2)
		// cout << n << " ";
		v.insert(n);



	trav(x, v) {
		// cout << x << endl;
		if (a % x != 0)found = 1;
	}


	if (!found)cout << "Yes\n";
	else cout << "No\n";

	// cout << v.size();

}

int main()
{

	fast_io

	int i, j, k;
	int t;

	// primeFactors(1, 20);

	cin >> t;
	tc(t)
	{
		ll a, b; cin >> a >> b;
		primeFactors(a, b);


	}


	return 0;
}