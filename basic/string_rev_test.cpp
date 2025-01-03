// string reverse


#include <cstdio>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <cmath>
using namespace std;

void Reverse(char *s, int st, int en) {
	if (st > en) return;
	while (st < en) {
		swap(s[st++], s[en--]);
	}
}

int main() {

	char s[100];

	cin.getline(s, 100);

	int len = strlen(s);
	for (int i = 0; i < len; ) {
		int j = i;
		while (j < len && s[j] != ' ') j++;
		Reverse(s, i, j - 1);
		i = j + 1;
	}
	printf("%s\n", s);
	cerr << s << endl;

	return 0;
}