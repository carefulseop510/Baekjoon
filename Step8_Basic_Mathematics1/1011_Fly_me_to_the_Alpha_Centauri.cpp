#include <iostream>
using namespace std;

int main() {
	int T;					// �׽�Ʈ���̽��� ����
	long long x, y;			// ���� ��ġ, ��ǥ ��ġ
	long long k = 0;		// �̵� ���� ����, ó������ 0
	long long cnt;			// ��ġ �۵� Ƚ�� ī��Ʈ
	long long gap;			// ���� ��ġ�� ��ǥ ��ġ ���� ��
	cin >> T;

	for (int i = 1; i <= T; i++) {
		cin >> x >> y;
		if (x >= y)	exit(0);		// x�� �׻� y���� ���� ���� ���´�
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