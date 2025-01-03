#include "bits/stdc++.h" // Include every standard library 
using namespace std;


///////////////data types//////////////////



/////////constants lowerCamelCase/////////
//const int mod = 1e9 + 7;



///////////methods lowerCamelCase//////////



/////////////////////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);


	double x, y; cin >> x >> y;

	if (y * log10(x) > x * log10(y)) {
		cout << ">\n";
	} else if (y * log10(x) < x * log10(y)) {
		cout << "<\n";
	} else cout << "=\n";

	return 0;
}