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

	string a, b;
	cin >> a >> b;

	reverse(a.begin(), a.end());
	reverse(b.begin(), b.end());

	while (a.back() == '0')a.pop_back();
	while (b.back() == '0')b.pop_back();

	if (a.size() != b.size()) {
		if (a.size() < b.size())cout << "<";
		else cout << ">";
		return 0;
	}

	int len = a.size();
	for (int i = len - 1; i > -1; --i) {
		if (a[i] != b[i]) {
			if (a[i] < b[i])cout << "<";
			else cout << ">";
			return 0;
		}
	}
	cout << "=";

	return 0;
}