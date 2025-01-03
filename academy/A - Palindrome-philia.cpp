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

	int j = n - 1, cnt = 0;
	for (int i = 0; i < n / 2; ++i) {
		if (s[i] != s[j])cnt++;
		j--;
	}

	cout << cnt << endl;

	return 0;
}