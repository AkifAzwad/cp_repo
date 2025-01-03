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

	std::vector<int> v;
	int k, t;

	int found = 0;
	int n = nums.size();
	for (int i = 0; i < n; ++i) {
		long long val = abs(nums[i] - t);
		mp1[val]++;
		pos[val] = i;
		if (mp1[val] >= 2) {
			if (abs(pos[val] - i) <= k)found = 1;
		}
	}


	return 0;
}