#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int x;
	int cnt = 0;
	cin >> x;

	while (x > 0) {
		cnt++;
		x -= cnt;
	}
	x += cnt;

	if (cnt % 2 == 0) {
		printf("%d/%d", x, cnt - x + 1);
	} else {
		printf("%d/%d", cnt - x + 1, x);
	}

	return 0;
}