#include <iostream>
using namespace std;

int main() {
	int T;					// 테스트케이스의 개수
	long long x, y;			// 현재 위치, 목표 위치
	long long k = 0;		// 이동 가능 광년, 처음에는 0
	long long cnt;			// 장치 작동 횟수 카운트
	long long gap;			// 현재 위치와 목표 위치 간의 갭
	cin >> T;

	for (int i = 1; i <= T; i++) {
		cin >> x >> y;
		if (x >= y)	exit(0);		// x는 항상 y보다 작은 값을 갖는다
		gap = y - x;

		while (k * k <= gap) {
			k++;
		}
		k--;

		gap -= k * k;
		cnt = k * 2 - 1;

		while (gap > 0) {
			gap -= k;
			if (gap < k)	k--;
			cnt++;
		}
		
		cout << cnt << endl;
		cnt = 0;
		k = 0;
	}

	return 0;
}