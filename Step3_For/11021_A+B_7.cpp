#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
	int n;
	int** arr = new int* [2];

	scanf("%d", &n);

	for (int i = 0; i < 2; i++) {
		arr[i] = new int[n];
	}
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[0][i]);
		scanf("%d", &arr[1][i]);
	}
	for (int i = 0; i < n; i++) {
		printf("Case #%d: %d\n", i + 1, arr[0][i] + arr[1][i]);
	}

	return 0;
}