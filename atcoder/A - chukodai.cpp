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

	string s;
	cin >> s;
	int a, b;
	cin >> a >> b;

	swap(s[a - 1], s[b - 1]);

	cout << s << endl;

	return 0;
}