#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;


/////////constants/////////
//const int mod = 1e9 + 7;
const int p1 = 137, mod1 = 1e9 + 7, p2 = 277, mod2 = 1e9 + 9;
const int N = 1e5 + 9;
int pw1[N], pw2[N];
int pref1[N], pref2[N];
int ip1, ip2;
int ipw1[N], ipw2[N];
//////////methods//////////
int pwr(long long n, long long k, int mod) {
	int ans = 1 % mod; n %= mod; if (n < 0) n += mod;
	while (k) {
		if (k & 1) ans = (long long) ans * n % mod;
		n = (long long) n * n % mod;
		k >>= 1;
	}
	return ans;
}
void power() {
	pw1[0] = 1; pw2[0] = 1;
	for (int i = 1; i < N; ++i) {
		pw1[i] = 1LL * pw1[i - 1] * p1 % mod1;
		pw2[i] = 1LL * pw2[i - 1] * p2 % mod2;
	}
	ip1 = pwr(p1, mod1 - 2, mod1);
	ip2 = pwr(p2, mod2 - 2, mod2);
	ipw1[0] =  1; ipw2[0] =  1;
	for (int i = 1; i < N; i++) {
		ipw1[i] = 1LL * ipw1[i - 1] * ip1 % mod1;
		ipw2[i] = 1LL * ipw2[i - 1] * ip2 % mod2;
	}
}

pair<int, int> get_hash(string s) {
	int n = s.size();
	int hs1 = 0, hs2 = 0;
	for (int i = 0; i < n; ++i) {
		hs1 += 1LL * s[i] * pw1[i] % mod1;
		hs2 += 1LL * s[i] * pw2[i] % mod2;
	}
	return {hs1, hs2};
}


void pre_cal(string s) {
	int n = s.size();
	for (int i = 0; i < n; ++i) {
		pref1[i] = (1LL * s[i] * pw1[i] % mod1);
		if (i)pref1[i] = (pref1[i - 1] + pref1[i]) % mod1;
		pref2[i] = (1LL * s[i] * pw2[i] % mod2);
		if (i)pref2[i] = (pref2[i - 1] + pref2[i]) % mod2;
	}
}

std::pair<int, int> sub_hash(int i, int j) {
	assert(i <= j);
	int hs1 = 0, hs2 = 0;
	hs1 = pref1[j];
	if (i) hs1 = (hs1 - pref1[i - 1] + mod1) % mod1;
	hs1 = 1LL * hs1 * ipw1[i] % mod1;
	hs2 = pref2[j];
	if (i) hs2 = (hs2 - pref2[i - 1] + mod2) % mod2;
	hs2 = 1LL * hs2 * ipw2[i] % mod2;
	return {hs1, hs2};
}
///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string a, b;
	cin >> a ;
	power();
	pre_cal(a);
	cout << (sub_hash(1, 2) == sub_hash(1, 2));

	return 0;
}