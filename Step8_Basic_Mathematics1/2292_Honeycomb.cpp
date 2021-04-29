#include <iostream>
using namespace std;

int main() {
	int n;
	int x = 2;
	int y = 1;
	cin >> n;
	int cnt = 1;
	if (n == 1) {
		cout << cnt << endl;
		exit(0);
	}
	for (int i = 1; ; i++) {
		cnt++;
		x = x + 6 * (i - 1);
		y = y + 6 * i;
		if (n >= x && n <= y) break;
	}
	cout << cnt << endl;

	return 0;
}