#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int n;
	int a, b;
	int cnt = 0;
	scanf("%d", &n);
	int temp = n;
	while (1) {
		a = temp / 10;
		b = temp % 10;
		temp = b * 10 + (a + b) % 10;
		cnt++;
		if (n == temp)	break;
	}

	printf("%d", cnt);
	return 0;
}