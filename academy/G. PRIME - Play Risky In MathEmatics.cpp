#include "bits/stdc++.h" // Include every standard library 
using namespace std;


///////////////data types//////////////////
using ll = long long;



/////////constants lowerCamelCase/////////
//const int mod = 1e9 + 7;
const int N = 1e5 + 9;
bool f[N];
// vector<int> primes;


///////////methods lowerCamelCase//////////
// void sieve() {
// 	int n = N - 9;
// 	vector<int> primes;
// 	f[1] = true;
// 	for (int i = 2; i * i <= n; i++) {
// 		if (!f[i]) {
// 			for (int j = i * i; j <= n; j += i) {
// 				f[j] = true;
// 			}
// 		}
// 	}
// }


bool isPrime(int n) {
	for (int i = 2; i * i <= n; ++i) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

bool ok(int n) { // checking if possible
	for (int i = 2; i <= n; i++) {
		// cout << i << " " << n - i << endl;

		if (isPrime(i) == true and isPrime(n - i) == true) {
			cout << i << " " << n - i << endl;
			return true;
		}

	}
	return false;
}


/////////////////////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);



	int n; cin >> n;


	if (isPrime(n)) {
		cout << "1\n" << n;
	} else if (n % 2) {
		cout << "3\n3 ";
		ok(n - 3);
	} else {
		cout << "2\n";
		ok(n);
	}


	return 0;
}