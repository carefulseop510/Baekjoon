#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>

bool is_hansoo(int n) {
	int tmp[3];
	int x = 0;
	if (n < 100)
		return true;
	else if (n == 1000)
		return false;

	while (n > 0) {
		tmp[x] = n % 10;
		n /= 10;	x++;
	}
	if (tmp[0] - tmp[1] == tmp[1] - tmp[2])
		return true;
	else
		return false;
}

int main() {
	int n;
	int cntNum = 0;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		if (is_hansoo(i))	cntNum++;
	}

	printf("%d", cntNum);
	return 0;
}