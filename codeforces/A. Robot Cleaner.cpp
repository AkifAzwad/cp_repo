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

	int i, j, k;
	int t;

	cin >> t;
	tc(t) {
		int n, m;
		int r1, c1, r2, c2;
		int time = 0;

		cin >> n >> m;
		cin >> r1 >> c1 >> r2 >> c2;

		int i = 0;
		int dr = 1, dc = 1;
		while (1 && i < 20) {
			i++;
			if (r1 == r2 || c1 == c2) {
				break;
			}
			else {


				int x = min(n - r1, m - c1);
				if (x <= 0) {
					int num1, num2;
					if (r1 == n) {
						num1 = abs(1 - r1);
						// num2 =	m - c1;
					}
					else {
						num1 = n - r1;;
						// num2 =	m - c1;
					}
					if (c1 == m) {
						num2 = abs(1 - c1);
						// num2 =	m - c1;
					}
					else {
						num2 = m - c1;;
						// num2 =	m - c1;
					}
					x = min(num1, num2);
				}
				x = abs(x);


				// cout << x << " ";

				int temp1 = inf, temp2 = inf;
				if (r2 > min(r1, r1 + x * dr) && r2 < max(r1, r1 + x * dr)) {
					temp1 = abs(r2 - r1);
				}
				if (c2 > min(c1, c1 + x * dc) && c2 < max(c1, c1 + x * dc)) {
					temp2 = abs(c2 - c1);
				}
				if (!x)x = inf;
				x = min(x, min(temp1, temp2));


				r1 += (x) * dr;
				c1 += (x) * dc;
				time += abs(x);


				// cout << x << endl;
				// cout << r1 << " " << c1 << endl;

				if (r1 == r2 || c1 == c2) {
					break;
				}
				if (r1 == n || r1 == 1)dr *= -1;
				if (c1 == m || c1 == 1)dc *= -1;
			}

		}
		cout << time << endl;


	}

	return 0;
}