#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;


/////////constants/////////
//const int mod = 1e9 + 7;


//////////methods//////////
const int N = 1e5 + 9;
bool f[N];


///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	int num = N - 9;
	f[1] = true;
	for (int i = 2; i <= num; i++) {
		if (!f[i]) {
			for (int j = i + i; j <= num; j += i) {
				f[j] = true;
			}
		}
	}

	int n; cin >> n;
	std::vector<int> v(n + 1);
	for (int i = 1; i <= n; ++i) {
		if (i % 2 == 0)v[i] = 1;
	}
	int col = 2;
	for (int i = 3; i <= n; ++i) {
		if (!f[i]) {
			for (int j = i; j <= n; j += i) {
				v[j] = col;
			}
			col++;
		}
	}


	for (int i = 2; i <= n; ++i) {
		cout  << v[i] << " ";
	}


	return 0;
}