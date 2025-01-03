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

	int a, b; cin >> a >> b;

	if (a > 0) {
		cout << "Positive\n";
	} else if (a == 0) {
		cout << "Zero\n";
	} else { //a<0
		if (b >= 0) {
			cout << "Zero\n";
		} else {//a<0 b<0
			int cnt = b - a + 1;
			if (cnt % 2)cout << "Negative\n";
			else cout << "Positive\n";
		}
	}

	return 0;
}