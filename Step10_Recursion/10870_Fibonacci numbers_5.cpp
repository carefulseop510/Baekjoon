#include <iostream>
using namespace std;

int mark(int n) {
	if (n == 0)	return 0;
	if (n == 1)	return 1;
	if (n == 2) {
		return 1;
	} else {
		return mark(n - 1) + mark(n - 2);
	}
}

int main() {
	int n;
	cin >> n;
	cout << mark(n) << endl;

	return 0;
}