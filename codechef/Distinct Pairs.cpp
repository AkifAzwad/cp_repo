
#include <bits/stdc++.h> // Include every standard library 
using namespace std;


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

	int n, m; cin >> n >> m;
	vii v1, v2;
	FORN(i, n)cin >> j, v1.pb({j, i});
	FORN(i, m)cin >> j, v2.pb({j, i});

	sort(all(v1)); sort(all(v2));

	int cnt = 0;

	if (n <= m)
	{
		FORN(i, n)
		{

			if (cnt < m) {

				FORN(j, m)
				{
					// cout << v1[i].ff + v2[j].ff << endl;
					cout << v1[i].ss << " " << v2[j].ss << endl;
					cnt++;
				}
			}
			else
			{
				// cout << v1[i].ff + v2[m - 1].ff << endl;
				cout << v1[i].ss << " " << v2[m - 1].ss << endl;
				cnt++;
			}
			if (cnt ==  n + m - 1)break;
		}
	}
	else
	{
		FORN(j, m)
		{

			if (cnt < n) {

				FORN(i, n)
				{
					// cout << v1[i].ff + v2[j].ff << " ";
					cout << v1[i].ss << " " << v2[j].ss << endl;
					cnt++;
				}
			}
			else
			{
				// cout << v1[n - 1].ff + v2[j].ff  << " ";
				cout << v1[n - 1].ss << " " << v2[j].ss << endl;
				cnt++;
			}
			if (cnt ==  n + m - 1)break;
		}
	}
	return 0;
}

