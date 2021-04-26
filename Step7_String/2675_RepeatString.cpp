#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring>

int main() {
	int t;						// 테스트 케이스의 개수
	char s_arr[1000][21];		// 문자열 저장 배열
	int r_arr[1000];			// 반복횟수 저장 배열
	scanf("%d", &t);
	for (int i = 0; i < t; i++) {
		scanf("%d %s", &r_arr[i], s_arr[i]);
	}
	
	for (int i = 0; i < t; i++) {
		for (int j = 0; j < strlen(s_arr[i]); j++) {
			for (int k = 0; k < r_arr[i]; k++) {
				printf("%c", s_arr[i][j]);
			}
		}
		printf("\n");
	}

	return 0;
}