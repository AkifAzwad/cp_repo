#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;


/////////constants/////////
//const int mod = 1e9 + 7;


//////////methods//////////


///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	string s; cin >> s;
	int n = s.size();
	for (int i = 1; i < n; ++i) {
		if (s[i] == s[i - 1]) {
			char ch = 'a';
			for (int j = 0; j < 26; ++j) {
				if (ch != s[i - 1]) {
					if (i + 1 < n) {
						if (ch != s[i + 1])break;
					} else break;
				}
				ch++;
			}
			s[i] = ch;
		}
	}
	cout << s << endl;
	return 0;
}