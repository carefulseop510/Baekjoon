#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main() {
	int M, N;			// M�̻� N����
	int sum = 0;		// �Ҽ��� ��
	int min = 10000;	// �ּҰ�
	cin >> M >> N;
	
	for (int i = M; i <= N; i++) {
		bool isPrime = true;
		for (int j = 2; j <= sqrt(i); j++) {
			if (i % j == 0) isPrime = false;
		}
		if (i == 1)	isPrime = false;

		if (isPrime)	sum += i;
		if (isPrime && min > i)	min = i;
	}
	if (sum == 0) {
		cout << -1 << endl;
	} else {
		cout << sum << endl;
		cout << min << endl;
	}

	return 0;
}