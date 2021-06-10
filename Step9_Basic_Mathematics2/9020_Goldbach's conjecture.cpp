#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main() {
	int T;			// 테스트 케이스의 개수
	int n;
	bool isPrime[10001] = { false, };
	cin >> T;

	// 소수 판별 배열
	isPrime[0] = true;
	isPrime[1] = true;
	for (int i = 2; i < 10001; i++) {
		for (int j = 2; j <= sqrt(i); j++) {
			if (i % j == 0)	isPrime[i] = true;
		}
	}

	// 골드바흐 파티션
	for (int i = 0; i < T; i++) {
		cin >> n;
		for (int i = n / 2; i >= 2; i--) {
			if (!isPrime[i] && !isPrime [n - i]) {
				cout << i << " " << n - i << endl;
				break;
			}
		}
	}

	return 0;
}