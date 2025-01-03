#include "bits/stdc++.h" // Include every standard library 
using namespace std;


///////////////data types//////////////////
using ll = long long;



/////////constants lowerCamelCase/////////
//const int mod = 1e9 + 7;
const int N = 1e7 + 9;
bool f[N];


///////////methods lowerCamelCase//////////



/////////////////////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int n = N - 9;
	vector<int> primes;
	f[1] = true;
	for (int i = 2; i <= n; i++) {
		if (!f[i]) {
			primes.push_back(i);
			for (int j = i + i; j <= n; j += i) {
				f[j] = true;
			}
		}
	}


	cin >> n;
	for (int i = 0; i < n; ++i) {
		cout << primes[i] << " ";
	}

	return 0;
}