
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

set<int> sa;

int finding(int x)
{
	auto it = sa.ub(x);
	it--;
	return (*it);
}

void remove(int x)
{
	sa.erase(x);
}

int main()
{

	fast_io

	int i, j, k;
	int t;

	int n, q;
	cin >> n >> q;
	int a[n + 2]; FOR(i, 1, n + 1)cin >> a[i];



	sa.insert(1);
	FOR(i, 2, n + 1)
	{
		if (a[i] % a[i - 1])sa.insert(i);
	}

	// trav(p, sa)cout << p << " ";
	// cout << endl;

	while (q--)
	{
		int type, x;
		cin >> type ;
		if (type == 1)
		{

			cin >> i;
			cin >> a[i];

			int pos;
			if (i > 1)
			{
				pos = finding(i);
				if ((finding(i) >= i) && ((a[i] % a[i - 1]) == 0))
				{
					remove(i);
				}
				else if ((finding(i) < i) && ((a[i] % a[i - 1]) != 0))
				{
					sa.insert(i);
				}
			}
			if (i <= n)
			{
				pos = finding(i + 1);
				if ((finding(i + 1) > i) && ((a[i + 1] % a[i]) == 0))
				{
					remove(i + 1);
				}
				else if ((finding(i + 1) <= i) && ((a[i + 1] % a[i]) != 0) )
				{

					sa.insert(i + 1);
				}
			}
			// for (auto it = sa.begin(); it != sa.end(); ++it)
			// {
			// 	cout << *it << " ";
			// }
			// cout << endl;
		}
		else
		{
			cin >> i;
			cout << finding(i) << endl;
		}
	}

	return 0;
}

