#include <iostream>
using namespace std;

int main() {
	int n;
	int cnt = 0;
	cin >> n;
	
	while (n > 0) {
		if (n % 5 == 0) {
			cnt += n / 5;
			break;
		}
		if (n % 3 == 0) {
			cnt++;
			n -= 3;
			continue;
		}
		n -= 5;
		cnt++;
		if (n < 0) {
			cout << -1 << endl;
			exit(0);
		}
	}
	cout << cnt << endl;

	return 0;
}