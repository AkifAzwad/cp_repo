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
	stack<char> st;
	int cur = 1;
	for (int i = 0; i < s.size(); ++i) {
		if (!st.empty()) {
			if (st.top() == s[i]) {
				cur = !cur;
				st.pop();
			}
			else st.push(s[i]);
		}
		else st.push(s[i]);
	}

	if (cur)cout << "No\n";
	else cout << "Yes\n";

	return 0;
}