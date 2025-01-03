// C++ program of finding nth palindrome
// of k digit
#include<bits/stdc++.h>
using namespace std;

void nthPalindrome(int n, int k)
{
	// Determine the first half digits
	int temp = (k & 1) ? (k / 2) : (k / 2 - 1);
	int palindrome = (int)pow(10, temp);
	palindrome += n - 1;

	// Print the first half digits of palindrome
	printf("%d", palindrome);

	// If k is odd, truncate the last digit
	if (k & 1)
		palindrome /= 10;

	// print the last half digits of palindrome
	while (palindrome)
	{
		printf("%d", palindrome % 10);
		palindrome /= 10;
	}
	printf("\n");
}

// Driver code
int main()
{
	int n = 6, k = 5;
	// printf("%dth palindrome of %d digit = ", n , k);
	// nthPalindrome(n , k);

	// n = 10, k = 6;
	// printf("%dth palindrome of %d digit = ", n , k);
	// nthPalindrome(n, k);

	int t;
	cin >> t;
	while (t--)
	{
		cin >> n;

		int num = 9;
		int cnt = 0;

		while (1)
		{
			cnt++;
			if (n - num <= 0)
			{
				break;
			}
			else n -= num;

			if (cnt % 2 == 0)num *= 10;
		}

		// cout << n << " " << cnt << endl;

		nthPalindrome(n, cnt);
	}

	return 0;
}
