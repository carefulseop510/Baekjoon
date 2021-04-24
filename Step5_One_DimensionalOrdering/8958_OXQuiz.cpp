#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <cstdlib>
using namespace std;

int main() {
	int n;
	int combo = 0;
	int* score;
	scanf("%d", &n);
	char** quiz = (char**)malloc(sizeof(char*) * n);

	for (int i = 0; i < n; i++) {
		quiz[i] = (char*)malloc(sizeof(char) * 81);
	}
	for (int i = 0; i < n; i++) {
		scanf("%s", quiz[i]);
	}
	score = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++) {
		score[i] = 0;
		for (int j = 0; j < strlen(quiz[i]); j++) {
			if (quiz[i][j] == 'O') {
				combo++;
			}
			if (quiz[i][j] == 'X') {
				combo = 0;
			}
			score[i] = score[i] + combo;
		}
		combo = 0;
	}

	for (int i = 0; i < n; i++) {
		printf("%d\n", score[i]);
	}

	return 0;
}