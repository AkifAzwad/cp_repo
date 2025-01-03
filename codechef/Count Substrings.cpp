
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
		ll n, q;
		ll l, r;
		cin >> n >> k >> q;
		string s; cin >> s;


		tc(q)
		{
			cin >> l >> r;
			ll left = l - 1, right = l - 1;
			ll zero = 0, one = 0;
			ll ans = 0;
			ll l1 = l, r1 = l, l2 = l, r2 = l;
			ll x, y;
			ll num1, num2;
			FOR(i, l - 1, r)
			{
				if (s[i] == '0')zero++;
				else one++;

				if (zero > k || one > k)
				{
					num1 = (r2 - l2);
					num1 = (num1 * num1 + num1) / 2;
					x = max(l1, l2); y = min(r1, r2 - 1);
					num2 = 0;
					if (x <= y && l1 != r1)
					{
						num2 = y - x + 1;
						num2 = (num2 * num2 + num2) / 2;
					}
					ans += (num1 - num2);
					// cout << l1 << " " << r1 << " "
					//      << l2 << " " << r2 << endl;
					l1 = l2; r1 = r2 - 1;
					j = l2 - 1;
					while (zero > k || one > k && l2 < r2)
					{
						if (s[j] == '0')zero--;
						else one--;
						j++; l2++;
						// cout << zero << " " << one << endl;
					}
				}

				// cout << ans << endl;
				r2++;
			}
			// r2--;
			// cout << l1 << " " << r1 << " "
			//      << l2 << " " << r2 << endl;
			num1 = (r2 - l2);
			num1 = (num1 * num1 + num1) / 2;
			x = max(l1, l2); y = min(r1, r2 - 1);
			num2 = 0;
			if (x <= y && l1 != r1)
			{
				num2 = y - x + 1;
				num2 = (num2 * num2 + num2) / 2;
			}
			ans += (num1 - num2);
			l1 = l2; r1 = r2;
			cout << ans << endl;
		}


	}

	return 0;
}

