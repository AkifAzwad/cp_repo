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

bool sortbysec(const pair<int, int> &a,
               const pair<int, int> &b)
{
	return (a.second < b.second);
}


int main()
{

	fast_io

	int i, j, k;
	int t;

	cin >> t;
	tc(t) {
		int n; cin >> n;
		int a[n];
		vii v, v1;
		string s;

		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
			// v.pb({a[i], i});
		}
		cin >> s;

		int num = 0;
		for (int i = 0; i < s.size(); ++i)
		{
			if (s[i] == '0') {
				num++;
				v.pb({a[i], i});
			}
			else {
				v1.pb({a[i], i});
			}
		}


		sort(all(v)); sort(all(v1));

		vii ans;
		int x = 1;
		for (int i = 0; i < v.size(); ++i)
		{
			// cout << v[i].ff << " " << v[i].ss << endl;
			v[i].ff = x++;
		}
		for (int i = 0; i < v1.size(); ++i)
		{
			v1[i].ff = x++;
			// cout << v1[i].ff << " " << v1[i].ss << endl;
		}


		// sort(all(v), sortbysec);
		// sort(all(v1), sortbysec);
		// ans = v + v1;
		for (int i = 0; i < v.size(); ++i)
		{
			ans.pb({v[i].ff, v[i].ss});
		}
		for (int i = 0; i < v1.size(); ++i)
		{
			ans.pb({v1[i].ff, v1[i].ss});
		}

		sort(all(ans), sortbysec);

		for (int i = 0; i < ans.size(); ++i)
		{
			cout << ans[i].ff << " ";
		}

		cout << endl;

	}

	return 0;
}