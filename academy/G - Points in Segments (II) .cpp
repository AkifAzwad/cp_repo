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

	int n; set<int> s;
	while (cin >> n) {
		s.insert(n);
	}
	for (auto p : s) {
		cout << p << "\n";
	}


	// int t;cin>>t;
	// while(t--){
	// 	int n,q;cin>>n>>q;
	// 	int l,r;cin>>l>>r;
	// }

	return 0;
}