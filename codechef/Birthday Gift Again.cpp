
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

	int i, j, k;
	int t;

	cin >> t;
	tc(t)
	{
		string s;
		cin >> s;

		int n = s.size();

		int a[n] = {0}, b[n] = {0};

		if (s[0] == '0')
		{
			a[0] = 1;
		}
		else
		{
			b[0] = 1;
		}
		FOR(i, 1, n)
		{
			if (s[i] == '0')
			{
				a[i] = a[i - 1] + 1;
				b[i] = b[i - 1];
			}
			else
			{
				b[i] = b[i - 1] + 1;
				a[i] = a[i - 1];
			}
		}
		// int q;
		// cin >> q;
		// tc(q)
		// {
		// 	int l, r;
		// 	cin >> l >> r;
		// 	l--; r--;
		// 	cout << a[r] - a[l] + (s[l] == '0') << " "
		// 	     << b[r] - b[l] + (s[l] == '1') << endl;
		// }
		int ans = 0;
		int x = 1;
		int len, r, l;
		int cnt0, cnt1;
		while (x * x + x <= n)
		{
			len = x * x + x;
			len--;
			for ( i = 0; i + len < n; ++i)
			{

				l = i; r = l + len;
				cnt0 = a[r] - a[l] + (s[l] == '0');
				cnt1 = b[r] - b[l] + (s[l] == '1');
				// cout << cnt0 << " " << cnt1 << endl;

				if (cnt0 == cnt1 * cnt1)ans++;
			}
			x++;
		}
		cout << ans << endl;
	}

	return 0;
}

