#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;


/////////constants/////////
//const int mod = 1e9 + 7;


//////////methods//////////
bool is_palindrome(const std::string &str, size_t lo, size_t hi)
{
	while (lo < hi + 1)
	{
		if (str[lo] != str[hi]) return false;
		lo++;
		hi--;
	}
	return true;
}

///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	string s;
	while (cin >> s) {
		int n = s.size();
		set<string> ans;
		for (int i = 0; i < n; ++i) {

			for (int j = i + 1; j < n; ++j) {
				if (is_palindrome(s, i, j))
				{
					std::string sub_string = s.substr(i, j - i + 1);
					ans.insert(sub_string);
				}
			}
		}
		for (auto p : ans) {
			cout << p << endl;
		}

		cout << endl;
	}

	return 0;
}