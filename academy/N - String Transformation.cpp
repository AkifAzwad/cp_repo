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

	string s, t;
	cin >> s >> t;


	int cnt1[30] = {0}, cnt2[30] = {0};
	for (int i = 0; i < s.size(); ++i) {
		cnt1[s[i] - 'a']++;
		cnt2[t[i] - 'a']++;
	}
	int ans = 0;
	std::vector<int> v1, v2;
	for (int i = 0; i < 30; ++i) {
		v1.push_back(cnt1[i]);
		v2.push_back(cnt2[i]);
	}
	sort(v1.begin(), v1.end());
	sort(v2.begin(), v2.end());

	int found = 0;
	if (v1.size() != v2.size())found = 1;
	for (int i = 0; i < v1.size(); ++i) {
		if (v1[i] != v2[i])found = 1;
	}
	if (found)cout << "No";
	else cout << "Yes";

	return 0;
}