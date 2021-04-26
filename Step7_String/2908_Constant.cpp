#include <iostream>
using namespace std;

int Sanggeon(int n) {
	int temp = 0;
	int r = 0;
	temp = n;
	while (temp != 0) {
		r *= 10;
		r += temp % 10;
		temp /= 10;
	}
	return r;
}
int main() {
	int a, b;
	cin >> a >> b;
	a = Sanggeon(a);
	b = Sanggeon(b);
	if (a > b)
		cout << a << endl;
	else if (a < b)
		cout <<  b << endl;

	return 0;
}