#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
using namespace std;

int main() {
	int n;
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		for (int t = n - i; t >= 1; t--) {
			printf(" ");
		}
		for (int j = 1; j <= i; j++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}