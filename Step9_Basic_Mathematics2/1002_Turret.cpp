#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
using namespace std;

int main() {
	int T;			//테스트 케이스
	int x1, y1, r1, x2, y2, r2;
	double dis;		//거리

	cin >> T;

	for (int i = 0; i < T; i++) {
		cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
		dis = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

		if (dis == 0) {
			if (r1 - r2 != 0) {
				cout << 0 << endl;
			} else if (r1 - r2 == 0) {
				cout << -1 << endl;
			}
		} else {
			if (dis < r1 + r2 && dis > abs(r2 - r1)) {
				cout << 2 << endl;
			} else if (dis == r1 + r2 || dis == abs(r2 - r1)) {
				cout << 1 << endl;
			} else if (dis < abs(r2 - r1) || dis > r1 + r2) {
				cout << 0 << endl;
			} else if (x1 == x2 && y1 == y2 && r1 == r2) {
				cout << -1 << endl;
			}
		}
	}

	return 0;
}