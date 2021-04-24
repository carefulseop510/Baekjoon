#include <iostream>
using namespace std;

int main(void) {
	int a, b, t;

	cin >> t;
	int** arr = new int* [2];

	for (int i = 0; i < 2; i++) {
		arr[i] = new int[t];
	}

	for (int i = 0; i < t; i++) {
		cin >> a >> b;
		arr[0][i] = { a };
		arr[1][i] = { b };
	}

	for (int i = 0; i < t; i++) {
		cout << arr[0][i] + arr[1][i] << endl;
	}

	for (int i = 0; i < 2; i++) {
		delete[] arr[i];
	}
	delete[] arr;

	return 0;
}