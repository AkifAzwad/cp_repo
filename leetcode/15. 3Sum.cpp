#include "bits/stdc++.h"
using namespace std;


/////////data types/////////
using ll = long long;


/////////constants/////////
//const int mod = 1e9 + 7;

struct Point
{
	int x, y, z;
};

//////////methods//////////
int sum() { return 0; }
template<typename... Args>
int sum(int a, Args... args) {
	return a + sum(args...);
}

///////////////////////////
int main()
{

	ios_base::sync_with_stdio(0);
	cin.tie(0);

	cout << gcd(2, 4) << endl;
	cout << lcm(2, 4) << endl;

	std::vector<int> vec(10, 10);


	for (auto& elem : vec) {
		elem *= 2;
		// cout << elem << endl;
	}
	for (auto& elem : vec) {
		// elem*=2;
		cout << elem << endl;
	}

	std::map<int, int> map;
	map[1] = 1;
	map[2] = 2;
	map[3] = 3;

	for (auto& [key, val] : map) {
		cout << key << " " << val << endl;
	}

	Point p1 = {1, 2, 3};
	auto [x, y, z] = p1;
	cout << x << " " << y << " " << z << endl;
	cout << sum(5, 7, 2, 2) << endl;
	return 0;
}
