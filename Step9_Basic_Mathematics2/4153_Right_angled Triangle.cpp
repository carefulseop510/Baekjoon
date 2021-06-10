#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	int tmp;

	while (1) {
		cin >> a >> b >> c;
		if (a == 0 && b == 0 && c == 0)	break;
		if (a > c) {
			tmp = a;
			a = c;
			c = tmp;

		}
		if (b > c) {
			tmp = c;
			c = b;
			b = tmp;
		}
		if (c * c == a * a + b * b) {
			cout << "right" << endl;
		} else {
			cout << "wrong" << endl;
		}
	}
	return 0;
}