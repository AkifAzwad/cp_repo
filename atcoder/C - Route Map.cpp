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

	int n, m; cin >> n >> m;
	std::vector<string> v[n + 5];
	string s[n], t[m];
	std::map<string, int> map;
	for (int i = 0; i < n; ++i) {
		cin >> s[i];
		map[s[i]]++;
	}

	for (int i = 0; i < m; ++i) {
		cin >> t[i];
		map[t[i]]++;
	}

	for (int i = 0; i < n; ++i) {
		if (map[s[i]] >= 2)cout << "Yes\n";
		else cout << "No\n";
	}



	return 0;
}