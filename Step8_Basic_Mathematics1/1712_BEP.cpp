#include <iostream>
using namespace std;

int main() {
	int a, b, c;
	cin >> a >> b >> c;

	if (c > b) {
		for (int i = 1; ; i++) {
			if ((c * i) > (a + (b * i))) {
				cout << a / (c - b) + 1 << endl;
				break;
			}				
		}
	} else {
		cout << "-1" << endl;
	}

	return 0;
}