#include<bits/stdc++.h>
using namespace std;

const int N = 1e6 + 9;
const int p1 = 137, mod1 = 1e9 + 7, p2 = 277, mod2 = 1e9 + 9;


int power(long long n, long long k, int mod) {
  int ans = 1 % mod; n %= mod; if (n < 0) n += mod;
  while (k) {
    if (k & 1) ans = (long long) ans * n % mod;
    n = (long long) n * n % mod;
    k >>= 1;
  }
  return ans;
}

int ip1, ip2;
pair<int, int> pw[N], ipw[N];
void prec() {
  pw[0] =  {1, 1};
  for (int i = 1; i < N; i++) {
    pw[i].first = 1LL * pw[i - 1].first * p1 % mod1;
    pw[i].second = 1LL * pw[i - 1].second * p2 % mod2;
  }
  ip1 = power(p1, mod1 - 2, mod1);
  ip2 = power(p2, mod2 - 2, mod2);
  ipw[0] =  {1, 1};
  for (int i = 1; i < N; i++) {
    ipw[i].first = 1LL * ipw[i - 1].first * ip1 % mod1;
    ipw[i].second = 1LL * ipw[i - 1].second * ip2 % mod2;
  }
}

pair<int, int> string_hash(string s) {
  int n = s.size();
  pair<int, int> hs({0, 0});
  for (int i = 0; i < n; i++) {
    hs.first += 1LL * s[i] * pw[i].first % mod1;
    hs.first %= mod1;
    hs.second += 1LL * s[i] * pw[i].second % mod2;
    hs.second %= mod2;
  }
  return hs;
}
pair<int, int> pref[N];
void build(string s) {
  int n = s.size();
  for (int i = 0; i < n; i++) {
    pref[i].first = 1LL * s[i] * pw[i].first % mod1;
    if (i) pref[i].first = (pref[i].first + pref[i - 1].first) % mod1;
    pref[i].second = 1LL * s[i] * pw[i].second % mod2;
    if (i) pref[i].second = (pref[i].second + pref[i - 1].second) % mod2;
  }
}
pair<int, int> get_hash(int i, int j) {
  assert(i <= j);
  pair<int, int> hs({0, 0});
  hs.first = pref[j].first;
  if (i) hs.first = (hs.first - pref[i - 1].first + mod1) % mod1;
  hs.first = 1LL * hs.first * ipw[i].first % mod1;
  hs.second = pref[j].second;
  if (i) hs.second = (hs.second - pref[i - 1].second + mod2) % mod2;
  hs.second = 1LL * hs.second * ipw[i].second % mod2;
  return hs;
}
int n;
int max_oc(int len) {
  std::pair<int, int> p, p1, p2;
  int val = n - len;

  p1 = get_hash(0, len - 1);
  p2 = get_hash(val, n - 1);


  for (int i = 1; i + len - 1 < n - 1; i ++) {
    // if (i != 0 && i + len - 1 < n - 1)
    p = get_hash(i, i + len - 1);
    if (p == p1)return i;
  }


  return -1;
}
int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  prec();
  string a; cin >> a ;
  n = a.size();
  build(a);

  int l = 1, r = n;
  int ans = -1;
  while (l <= r) {
    int mid = (l + r) >> 1;
    // int mid = l;
    int i = max_oc(mid);
    // cout << mid << " " << i << endl;
    if (i != -1) {
      // cout << i << endl;
      ans = mid;
      l = mid + 1;
    }
    else {
      r = mid - 1;
    }
    // l++;
  }

  string res = "";
  if (ans) {
    for (int i = ans; i > 0; --i) {
      int len = i;
      std::pair<int, int> p, p1, p2;
      int val = n - len;
      p1 = get_hash(0, len - 1);
      p2 = get_hash(val, n - 1);
      if (p1 == p2) {
        res = a.substr(0, i);
        break;
      }
    }

  }
  if (res != "")cout << res << endl;
  else cout << "Just a legend\n";


  return 0;
}