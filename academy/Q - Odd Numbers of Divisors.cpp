#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;
#define int long long
#define valid(nx,ny) nx>=1 && nx<=row && ny>=1 && ny<=col


/////direction_array///////



/////////constants/////////
//const int mod = 1e9 + 7;
const int N = 1e5 + 100;
int spf[N];
//////////methods//////////


///////////////////////////
signed main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	for (int i = 2; i <= N; i++) {
		spf[i] = i;
	}
	for (int i = 2; i <= N; i++) {
		for (int j = i; j <= N; j += i) {
			spf[j] = min(spf[j], i);
		}
	}
	std::vector<int> v[1500];
	for (int i = 1; i * i <= 1e10; ++i) {
		int cur = i;
		int nod = 1;
		while (cur > 1)
		{
			int prm = spf[cur];
			int cnt = 0;
			while (cur % prm == 0) {
				cur /= prm;
				cnt++;
			}
			nod *= (2 * cnt) + 1;
		}
		// if (nod == 5)cout << i << endl;
		v[nod].push_back(i * i);
	}

	int t; cin >> t;
	while (t--) {
		int k, low, high;
		cin >> k >> low >> high;
		int l = lower_bound(v[k].begin(), v[k].end(), low) - v[k].begin();
		int h = upper_bound(v[k].begin(), v[k].end(), high) - v[k].begin();
		h--;
		int zero = 0;
		cout << max(h - l + 1, zero) << endl;
	}



	return 0;
}