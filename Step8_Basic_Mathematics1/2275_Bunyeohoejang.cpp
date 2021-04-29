//재귀 풀 떄 다시 보기
#include <iostream>
using namespace std;

int fun(int k, int n) {
	int res = 0;
	if (k == 0) {
		for (int i = 1; i <= n; i++) {
			res = i;
		}
		return res;
	} else {
		for (int i = 1; i <= n; i++) {
			res += fun(k - 1, i);
		}
	}
	
	return res;
}

int main() {
	int t, k, n;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> k;
		cin >> n;
		cout << fun(k, n) << endl;
	}

	return 0;
}