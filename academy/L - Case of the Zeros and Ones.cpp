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

	int n; cin >> n;
	string s; cin >> s;
	stack<char> st;


	for (int i = 0; i < n; ++i) {
		if (st.empty()) {
			st.push(s[i]);
		} else {
			if (st.top() != s[i]) {
				st.pop();
			} else st.push(s[i]);
		}
	}
	cout << st.size();

	return 0;
}