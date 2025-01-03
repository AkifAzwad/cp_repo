#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;



/////////constants/////////
//const int mod = 1e9 + 7;
const int N = 105;
int in[N], out[N];


//////////methods//////////



///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n; cin >> n;
	int ans = 0, ans2 = 0, sum = 0;
	while (n--) {
		int a, b, c;
		cin >> a >> b >> c;
		if (out[a] || in[b]) {
			in[a]++; out[b]++;
			ans += c;
		} else {
			out[a] = in[b] = 1;
		}
		sum += c;
	}


	cout << min(ans, sum - ans) << endl;

	return 0;
}