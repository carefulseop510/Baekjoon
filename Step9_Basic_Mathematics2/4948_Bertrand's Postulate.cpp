#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int n = 0;			// 임의의 자연수
	int cnt = 0;		// 소수 카운트
	int i, j;
	bool isPrime[246913] = { false, };

	// 미리 소수를 다 판별하자
	isPrime[0] = true;
	isPrime[1] = true;
	for (j = 2; j < 246913 / j; j++) {		// 2부터 246912까지
		if (isPrime[j])	continue;
		for (i = j * j; i < 246913; i += j)
			if (i % j == 0)	isPrime[i] = true;
	}
	cin >> n;

	while (n != 0) {
		cnt = 0;
		//소수 판별
		for (i = n + 1; i <= n * 2; i++) {
			if (!isPrime[i])	cnt++;
		}
		cout << cnt << "\n";
		cin >> n;
	}
	
	return 0;
}