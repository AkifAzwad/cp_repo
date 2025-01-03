#include "bits/stdc++.h" // Include every standard library 
using namespace std;


///////////////data types//////////////////
using ll = long long;



/////////constants lowerCamelCase/////////
//const int mod = 1e9 + 7;



///////////methods lowerCamelCase//////////



/////////////////////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	std::vector<ll> v1;
	// v1.push_back()
	for (int i = 5; i <= 1000000; i += 5) {
		int num = 0, x = i;
		while (x % 5 == 0) {
			num++;
			x /= 5;
		}
		if (v1.size() == 0)v1.push_back(num);
		else v1.push_back(num + v1.back());
		// cout << v1.back() << endl;
	}

	// cout << v1.back() << endl;
	int m; cin >> m;

	if (binary_search(v1.begin(), v1.end(), m)) {
		int pos = lower_bound(v1.begin(), v1.end(), m) - v1.begin();
		pos++;
		cout << "5" << endl;
		for (int i = 5 * pos; i < 5 * pos + 5; ++i) {
			cout << i << " ";
		}
	} else {
		cout << "0\n";
	}


	return 0;
}