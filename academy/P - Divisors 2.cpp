#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;
#define valid(nx,ny) nx>=1 && nx<=row && ny>=1 && ny<=col


/////direction_array///////
int fx1[] = { +1, -1, +0, +0}; //straight
int fy1[] = { +0, +0, +1, -1};
int fx2[] = { +0, +0, +1, -1, -1, +1, -1, +1}; //and diagonally
int fy2[] = { -1, +1, +0, +0, +1, +1, -1, -1};


/////////constants/////////
//const int mod = 1e9 + 7;
const int N = 1e6 + 9;
int d[N];
bool ans[N];
std::vector<int> res;
//////////methods//////////


///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	for (int i = 1; i < N; ++i) {
		for (int j = i; j < N; j += i) {
			d[j]++;
		}
	}

	memset(ans, true, sizeof ans);
	for (int i = 1; i < N; ++i) {
		for (int j = i; j < N; j += i) {
			if (d[j] <= 3 || d[j] % d[i] != 0) {
				ans[j] = false;
			}
		}
	}

	for (int i = 1; i < N; ++i) {
		if (ans[i])res.push_back(i);
	}
	int cnt = 1;
	for (auto p : res) {
		if (cnt % 108 == 0)cout << p << endl;
		cnt++;
	}



	return 0;
}