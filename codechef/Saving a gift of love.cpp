
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
	int t;

	cin >> t;
	tc(t)
	{
		ll x, b, c;
		ll num1, num2, num3;
		cin >> x;
		set <ll> s, s1, s2;
		vl y, q, r;
		ll mx = 0, ans = INFF;

		cin >> b;
		FORN(i, b)
		{
			cin >> num1 >> num2;
			s.insert(num1); s1.insert(num1);
			y.pb(num2);

		}
		cin >> c;
		FORN(i, c)
		{
			cin >> num1 >> num2 >> num3;
			s.insert(num1); s2.insert(num1);
			q.pb(num2); r.pb(num3);
		}

		ll left, right, mid;
		left = 0, right = INFF;
		while (left <= right)
		{

			mid = left + ((right - left) / 2);
			mx = mid;
			i = 0, j = 0, k = 0;
			int found = 0;

			for (auto it = s.begin(); it != s.end(); ++it)
			{
				if (s1.find(*it) != s1.end())
				{
					mx -= y[i++];
					if (mx <= 0)
					{
						found = 1; break;
					}
				}
				else
				{
					if (mx >= q[j])
					{
						mx += r[k];
					}
					j++, k++;
				}
				// cout << mx << endl;
			}

			if (!found)
			{
				if (mid <= ans)
				{
					right = mid - 1;
				}
				else
				{
					left = mid + 1;
				}
				ans = min(mid, ans);
			}
			else
			{
				left = mid + 1;
			}

		}

		cout << ans << endl;
	}

	return 0;
}

