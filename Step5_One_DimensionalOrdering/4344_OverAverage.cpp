#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <cstdlib>

int main() {
	int c;				//�׽�Ʈ ���̽��� ����
	double* scoreboard;
	scanf("%d", &c);
	int** arr = (int**)malloc(sizeof(int*) * c);
	scoreboard = (double*)malloc(sizeof(double) * c);
	int n;			//�л��� ��
	double overavg = 0;	//��� �Ѵ� ���
	for (int i = 0; i < c; i++) {
		scanf("%d", &n);
		arr[i] = (int*)malloc(sizeof(int) * n);
		scoreboard[i] = 0;
		for (int j = 0; j < n; j++) {
			scanf("%d", &arr[i][j]);
			scoreboard[i] = scoreboard[i] + arr[i][j];
		}
		scoreboard[i] = scoreboard[i] / n;
		for (int k = 0; k < n; k++) {
			if (arr[i][k] > scoreboard[i])	overavg++;
		}
		scoreboard[i] = overavg / n * 100;
		overavg = 0;
	}

	for (int i = 0; i < c; i++) {
		printf("%.3f%%\n", scoreboard[i]);
	}
	return 0;
}