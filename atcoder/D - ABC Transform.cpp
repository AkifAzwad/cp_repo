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
	cout << s << endl;
	for (int i = 0; i < 6; ++i) {
		string temp;
		for (int i = 0; i < s.size(); ++i) {
			if (s[i] == 'A')temp += "BC";
			if (s[i] == 'B')temp += "CA";
			if (s[i] == 'C')temp += "AB";
		}
		s = temp;

		cout << s[0] << s[1] << s[2] << "\n" ;
	}

	return 0;
}