#include "bits/stdc++.h" // Include every standard library 
using namespace std;


///////////////data types//////////////////
using ll = long long;



/////////constants lowerCamelCase/////////
//const int mod = 1e9 + 7;



///////////methods lowerCamelCase//////////


int leapCnt(int l, int r) {
	l--;
	int L = (l / 4) - (l / 100) + (l / 400);
	int R = (r / 4) - (r / 100) + (r / 400);
	// cout << R << " " << L << endl;
	return R - L;
}

/////////////////////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t; int pos = 1;

	cin >> t;
	while (t--) {
		string month1, month2;
		int date1, date2, year1, year2;
		char comma;
		cin >> month1 >> date1 >> comma >> year1;
		cin >> month2 >> date2 >> comma >> year2;

		int ans = 0;


		if (month1 != "January" && month1 != "February")year1++;
		if (month2 == "January" || month2 == "February" && date2 < 29)year2--;

		ans = leapCnt(year1, year2);
		// cout << ans << " " << endl;


		// cout << isLeap(2, month2, date2, year2) << endl;
		cout << "Case " << pos++ << ": ";
		cout << max(ans, 0) << endl;

	}

	return 0;
}