#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>
#include <cstring>

int main() {
	int t;						// �׽�Ʈ ���̽��� ����
	char s_arr[1000][21];		// ���ڿ� ���� �迭
	int r_arr[1000];			// �ݺ�Ƚ�� ���� �迭
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