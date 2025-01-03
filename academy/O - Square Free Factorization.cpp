#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;



/////////constants/////////
//const int mod = 1e9 + 7;
const int N = 1e6 + 9;
int spf[N];
// int cnt[N];
int ans[N];
//////////methods//////////



///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	std::vector<int> v;
	for (int i = 2; i < N; i++) {
		spf[i] = i;
	}
	for (int i = 2; i < N; i++) {
		for (int j = i; j < N; j += i) {
			spf[j] = min(spf[j], i);
		}
	}

	for (int i = 2; i < N; ++i) {
		map<int, int> cnt;
		int x = i;
		while (x > 1) {
			cnt[spf[x]]++;
			x /= spf[x];
		}
		// cout << cnt[2] << endl;
		int ans = 0;
		for (auto p : cnt) {
			if (p.second)ans += (p.second + 1);
		}
		x = ans;
		if (x && (!(x & (x - 1))))v.push_back(i);
	}


	for (int i = 0; i < 4; ++i) {
		cout << v[i] << endl;
	}



	return 0;
}