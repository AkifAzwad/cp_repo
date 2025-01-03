#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;


/////////constants/////////
//const int mod = 1e9 + 7;


//////////methods//////////
string func(string s) {
	int n = s.size();
	int cur = 0;
	std::vector<int> one, two;
	for (int i = 1; i < n; ++i) {
		int num = (s[i] - '0') % 3;
		// cout << num << endl;
		cur += num;
		cur %= 3;
		if (num == 1)one.push_back(i);
		else if (num == 2)two.push_back(i);
	}
	// cout << cur << endl;


	string ans;
	if (cur == 1) {
		if (!one.empty()) {
			int pos = one[0];
			for (int i = 1; i < n; ++i) {
				if (i != pos)ans += s[i];
			}
		}
	}
	else if (cur == 2) {
		if (!two.empty()) {
			int pos = two[0];
			for (int i = 1; i < n; ++i) {
				if (i != pos)ans += s[i];
			}
		}
		else if (one.size() >= 2) {
			int pos1 = one[0]; int pos2 = one[1];
			int cnt = 0;
			for (int i = 1; i < n; ++i) {
				if (i != pos1 && i != pos2)ans += s[i];
			}
		}
	} else {
		for (int i = 1; i < n; ++i) {
			ans += s[i];
		}
	}
	return ans;
}

///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string s; cin >> s;
	int sum = 0;
	int n = s.size();
	for (int i = 0; i < n; ++i) {
		sum += (s[i] - '0');
	}
	// cout << func(s) << endl;;
	cout << sum % 3 << endl;

	if (sum % 3) {
		string ans = func(s);
		int cur = 0;
		for (int i = 0; i < ans.size(); ++i) {
			cur += (ans[i] - '0');
		}
		if (cur % 3) {
			cur = 0;
			ans = "";
		}

		string temp;
		temp = ans;

		cur = cur + (s[0] - '0');
		if (cur % 3) {
			string temp2 = s;
			int len = temp2.size();
			if (temp2.size() == 1) {
				ans = "";
			}
			else if (temp2[1] == '0') {
				if (cur % 3 == 1) {
					int pos = -1;
					for (int i = len - 1; i > -1; --i) {
						if (temp2[i] == '1') {
							pos = i;
						}
					}
					if (pos == -1) {
						ans = "";
					} else {
						ans = "";
						for (int i = 0; i < len; ++i) {
							if (i != pos)ans += temp2[i];
						}
					}
				} else {
					std::vector<int> one, two;
					int cnt = 0;
					for (int i = len - 1; i > 0; --i) {
						if (temp2[i] == '1') {
							one.push_back(i);
						}
						if (temp2[i] == '2') {
							two.push_back(i);
						}
					}
					if (!two.empty()) {
						ans = "";
						int pos = two[0];
						for (int i = 0; i < len; ++i) {
							if (i != pos)ans += temp2[i];
						}
					} else if (one.size() >= 2) {
						ans = "";
						int pos1 = one[0];
						int pos2 = one[1];
						for (int i = 0; i < len; ++i) {
							if (i != pos1 && i != pos2)ans += temp2[i];
						}
					}
					else {
						ans = temp;
					}
				}
			} else {
				ans = temp;
			}
		} else {
			ans = s[0] + temp;
		}



		reverse(ans.begin(), ans.end());
		while (ans.size() > 1) {
			if (ans.back() == '0')ans.pop_back();
			else break;
		}
		if (!ans.empty())reverse(ans.begin(), ans.end());
		if (ans.size())cout << ans << endl;
		else cout << "-1\n";

	} else {
		cout << s << endl;
	}

	return 0;
}