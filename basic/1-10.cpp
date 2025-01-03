//printing 1-n and n-1


#include <cstdio>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{

	int i, n = 5;
	// cin >> n;

	for (i = 1; i < 2 * n; i++)
		cout << i - 2 * max(0, i - n) << '\n';

	return 0;
}