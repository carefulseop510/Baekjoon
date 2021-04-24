#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	int** arr;
	int cnt = 0;
	arr = (int**)malloc(sizeof(int*));
	arr[0] = (int*)malloc(sizeof(int) * 2);

	int temp1, temp2;

	while (scanf("%d %d", &temp1, &temp2) != EOF) {
		arr[cnt][0] = temp1;
		arr[cnt][1] = temp2;
		cnt++;

		//추가 할당
		arr = (int**)realloc(arr, sizeof(int*) * (cnt + 1));	//앞 1을 2로
		arr[cnt] = (int*)malloc(sizeof(int) * 2);
	}

	for (int i = 0; i < cnt; i++) {
		printf("%d\n", arr[i][0] + arr[i][1]);
	}

	return 0;
}