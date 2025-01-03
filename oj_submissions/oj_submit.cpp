#include "bits/stdc++.h"
using namespace std;

using ll = long long;


int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	//freopen("icecream.in", "r", stdin);

	string s, temp; cin >> temp;
	s += '*';
	s += temp;
	int n = s.size();



	std::vector<int> v(n + 1, 0);
	for (int i = 1; i <= n; ++i) {
		if (s[i - 1] == '<' and s[i] == '>') {
			int mx = 0, cur = 0, left = i - 1, right = i;
			while (left >= 0 and s[left] == '<'  and !v[left]) {
				left--; cur++;
				mx = max(mx, cur);
			}
			cur = 0;
			while (right <= n and s[right] == '>' and !v[right]) {
				right++; cur++;
				mx = max(mx, cur);
			}
			v[i] = mx;
		}
	}

	for (int i = 1; i <= n; ++i) {
		if (s[i - 1] == '>' and s[i] == '<') {
			cout << i << endl;
			int cur = 1, left = i - 1, right = i + 1;
			while (left >= 0 and s[left] == '>' and !v[left]) {
				v[left--] = cur++;
			}
			cur = 1;
			while (right <= n and s[right] == '<' and !v[right]) {
				v[right++] = cur++;
			}
		}
	}


	for (int i = 1; i <= n; ++i) {
		if (v[i]) {
			int cur = v[i], left = i - 1, right = i + 1;
			while (left >= 2 and s[left] == '<'  and !v[left]) {
				v[left--] = --cur;
			}
			cur = v[i];
			while (right <= n - 1 and s[right] == '>' and !v[right]) {
				v[right++] = --cur;
			}
		}
	}

	ll sum = 0;
	for (int i = 1; i <= n; ++i) {
		sum += v[i];
		cout << v[i] << " ";
	}
	cout << endl;
	cout << sum;


	return 0;
}