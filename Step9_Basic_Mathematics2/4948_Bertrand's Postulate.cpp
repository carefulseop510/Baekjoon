#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int n = 0;			// ������ �ڿ���
	int cnt = 0;		// �Ҽ� ī��Ʈ
	int i, j;
	bool isPrime[246913] = { false, };

	// �̸� �Ҽ��� �� �Ǻ�����
	isPrime[0] = true;
	isPrime[1] = true;
	for (j = 2; j < 246913 / j; j++) {		// 2���� 246912����
		if (isPrime[j])	continue;
		for (i = j * j; i < 246913; i += j)
			if (i % j == 0)	isPrime[i] = true;
	}
	cin >> n;

	while (n != 0) {
		cnt = 0;
		//�Ҽ� �Ǻ�
		for (i = n + 1; i <= n * 2; i++) {
			if (!isPrime[i])	cnt++;
		}
		cout << cnt << "\n";
		cin >> n;
	}
	
	return 0;
}