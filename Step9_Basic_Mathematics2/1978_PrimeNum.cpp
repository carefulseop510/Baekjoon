#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int N;			// ���� ����
	int arr[100];	// �� ���� �迭
	int cnt = 0;	// �Ҽ� ī��Ʈ
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	for (int i = 0; i < N; i++) {
		bool isPrime = true;
		for (int j = 2; j < arr[i]; j++) {
			if (arr[i] % j == 0) isPrime = false;
		}
		if (arr[i] == 1)	isPrime = false;
		if(isPrime)	cnt++;
	}

	cout << cnt << endl;

	return 0;
}