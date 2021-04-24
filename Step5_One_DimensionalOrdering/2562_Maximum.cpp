#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int max = 0;
	int arr[9];
	int n;

	for (int i = 0; i < 9; i++) {
		scanf("%d", &arr[i]);
	}

	for (int j = 0; j < 9; j++) {
		if (max < arr[j]) { max = arr[j];	n = j; }
	}

	printf("%d\n%d", max, n + 1);

	return 0;
}