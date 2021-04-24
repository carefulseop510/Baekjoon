#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int n, x;
	int* a;

	scanf("%d %d", &n, &x);
	a = new int[n];

	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}

	for (int i = 0; i < n; i++) {
		if (a[i] < x) {
			printf("%d ", a[i]);
		}
	}

	return 0;
}