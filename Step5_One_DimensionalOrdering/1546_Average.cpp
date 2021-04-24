#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	float max = -1;
	float avg = 0;
	int n;
	scanf("%d", &n);

	float* arr = (float*)malloc(sizeof(float) * n);
	for (int i = 0; i < n; i++) {
		scanf("%f", &arr[i]);
	}

	for (int i = 0; i < n; i++) {
		if (max < arr[i])	max = arr[i];
	}
	for (int i = 0; i < n; i++) {
		arr[i] = arr[i] / max * 100;
	}
	for (int i = 0; i < n; i++) {
		avg = avg + arr[i];
	}

	printf("%f", avg / n);

	return 0;
}