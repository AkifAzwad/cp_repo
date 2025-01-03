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


ll findSubarraySum(ll arr[], ll n, ll sum)
{
	// STL map to store number of subarrays
	// starting from index zero having
	// particular value of sum.
	unordered_map<ll, ll> prevSum;

	ll res = 0;

	// Sum of elements so far.
	ll currsum = 0;

	for (ll i = 0; i < n; i++) {

		// Add current element to sum so far.
		currsum += arr[i];

		// If currsum is equal to desired sum,
		// then a new subarray is found. So
		// increase count of subarrays.
		if (currsum == sum)
			res++;

		// currsum exceeds given sum by currsum
		//  - sum. Find number of subarrays having
		// this sum and exclude those subarrays
		// from currsum by increasing count by
		// same amount.
		if (prevSum.find(currsum - sum) != prevSum.end())
			res += (prevSum[currsum - sum]);

		// Add currsum value to count of
		// different values of sum.
		prevSum[currsum]++;
	}

	return res;
}

int main()
{

	fast_io

	ll i, j, k;
	ll t;

	ll n;
	cin >> n >> k;
	ll a[n];

	for (i = 0; i < n; ++i)
	{
		cin >> a[i];
	}


	ll cnt = findSubarraySum(a, n, k);

	cout << cnt << endl;

	return 0;
}