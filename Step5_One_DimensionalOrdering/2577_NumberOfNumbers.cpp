#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int A, B, C, m;
	int dig_cnt = 1;
	int* arr;
	scanf("%d %d %d", &A, &B, &C);
	m = A * B * C;
	int temp = m;
	int cnt = 0;

	while (temp >= 10) {
		temp = temp / 10;
		dig_cnt++;
	}
	arr = (int*)malloc(sizeof(int) * dig_cnt);

	temp = m;
	for (int i = 0; i < dig_cnt; i++) {
		arr[i] = temp % 10;
		temp = temp / 10;
	}

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < dig_cnt; j++) {
			if (arr[j] == i)	cnt++;
		}
		printf("%d\n", cnt);
		cnt = 0;
	}

	return 0;
}