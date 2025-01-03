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


const int N = 1e5;
int spf[N + 9];

int main()
{

	fast_io

	int i, j, k;
	int t;

	for (int i = 2; i < N; i++) {
		spf[i] = i;
	}
	for (int i = 2; i < N; i++) {
		for (int j = i; j < N; j += i) {
			spf[j] = min(spf[j], i);
		}
	}

	int pos = 1;

	int q; cin >> q; // queries q <= 1e6
	while (q--) {
		int n, m; cin >> m >> n;
		int num = n;

		int cnt1[N + 1] = {0};
		// set<int> ans;

		int x = m;
		while (x > 1) {
			// ans.insert(spf[x]);
			cnt1[spf[x]]++;
			x /= spf[x];
		}




		int cnt2[N + 1] = {0};
		// set<int> ans;
		for (int i = 2; i <= n; ++i)
		{
			int x = i;
			while (x > 1) {
				// ans.insert(spf[x]);
				cnt2[spf[x]]++;
				x /= spf[x];
			}
			// cout << i << endl;

		}


		ll ans = 1;
		ll mx = inf;
		int found = 0;
		for (int i = 0; i < m + 1; ++i)
		{
			if (cnt1[i]) {
				// cout << i << " ";
				// cout << cnt1[i] << " " << cnt2[i] << endl;
				if (!cnt2[i])found = 1;
				ll x = cnt2[i] / cnt1[i];
				mx = min(x, mx);
			}
		}
		cout << "Case " << pos++ << ":\n";
		if (mx != inf && !found)cout << mx << endl;
		else cout << "Impossible to divide\n";

	}




	return 0;
}