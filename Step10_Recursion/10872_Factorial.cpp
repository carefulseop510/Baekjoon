#include <iostream>
using namespace std;

int mark(int n) {
	if (n == 0)	return 1;
	if (n == 1) {
		return n;
	} else {
		return n * mark(n - 1);
	}
}

int main() {
	int N;
	cin >> N;
	cout << mark(N) << endl;

	return 0;
}