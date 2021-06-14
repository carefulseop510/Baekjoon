#include <iostream>
using namespace std;

void mark(int i, int j, int n) {
	if ((i / n) % 3 == 1 && (j / n) % 3 == 1) {
		cout << ' ';
	} else {
		if (n / 3 == 0) {
			cout << '*';
		} else {
			mark(i, j, n / 3);
		}
	}
}

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			mark(i, j, n / 3);
		}
		cout << "\n";
	}

	return 0;
}