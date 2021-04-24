#include <iostream>
#include <cstdio>
using namespace std;

int d(int n) {
	int sum = n;

	while (n > 0) {
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int main() {
	int is_selfnum[10001];
	for (int i = 1; i <= 10000; i++) {
		if (d(i) <= 10000) {
			is_selfnum[(d(i))] = 1;
		}
	}
	for (int i = 1; i <= 10000; i++) {
		if (is_selfnum[i] != 1) {
			printf("%d\n", i);
		}
	}
	return 0;
}