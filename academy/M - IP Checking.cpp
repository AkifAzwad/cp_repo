#include "bits/stdc++.h" // Include every standard library 
using namespace std;


///////////////data types//////////////////
using ll = long long;



/////////constants lowerCamelCase/////////
//const int mod = 1e9 + 7;



///////////methods lowerCamelCase//////////
int toDecimal(string x, int base) {
	return stoi(x, 0, base);
}

vector<string> separator(string s) {
	string temp;
	vector<string>ans;
	for (int i = 0; i < s.size(); ++i) {
		if (s[i] == '.') {
			ans.push_back(temp);
			temp = "";
		} else temp += s[i];
	}
	if (!temp.empty())ans.push_back(temp);
	return ans;
}

/////////////////////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int pos = 1;

	int t;
	cin >> t;

	while (t--) {
		int found = 0;
		string s1, s2;
		cin >> s1 >> s2;
		vector<string> final1, final2;

		final1 = separator(s1);
		final2 = separator(s2);

		for (int i = 0; i < final1.size(); ++i) {
			int x, y;
			x = toDecimal(final1[i], 10);
			y = toDecimal(final2[i], 2);
			// cout << x << " " << y << endl;
			if (x != y)found = 1;
		}

		// Case 1: No
		cout << "Case " << pos++ << ": ";
		if (found)cout << "No\n";
		else cout << "Yes\n";

	}

	return 0;
}