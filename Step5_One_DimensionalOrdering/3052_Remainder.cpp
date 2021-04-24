#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int arr[10];
	int cnt = 1;
	int temp = 0;

	for (int i = 0; i < 10; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < 10; i++) {
		arr[i] = arr[i] % 42;
	}

	for (int i = 0; i < 9; i++) {
		for (int j = i + 1; j < 10; j++) {
			if (arr[i] == arr[j])	temp = 1;
		}
		if (temp == 0) {		// 한 새끼라도 같으면 0이면 추가
			cnt++;
		}
		temp = 0;
	}

	printf("%d", cnt);

	return 0;
}