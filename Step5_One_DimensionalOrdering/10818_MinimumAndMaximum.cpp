#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	int max = -1000000;
	int min = 1000000;
	scanf("%d", &n);
	int* arr = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++) {
		scanf("%d ", &arr[i]);
	}

	for (int i = 0; i < n; i++) {
		if (max < arr[i])	max = arr[i];
		if (min > arr[i])	min = arr[i];
	}

	printf("%d %d", min, max);

	return 0;
}