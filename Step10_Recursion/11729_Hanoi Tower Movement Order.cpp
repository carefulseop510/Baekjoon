#include <iostream>
using namespace std;

void HanoiTower(int n, int from, int by, int to) {
	if (n == 1) {
		cout << from << " " << to << "\n";
	} else {
		HanoiTower(n - 1, from, to, by);
		cout << from << " " << to << "\n";
		HanoiTower(n - 1, by, from, to);
	}
}

int main() {
	int n;
	cin >> n;
	cout << (1 << n) - 1 << "\n";
	HanoiTower(n, 1, 2, 3);

	return 0;
}