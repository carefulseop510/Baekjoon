#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
	string a, b, tmp, ans;
	cin >> a >> b;
	int len;
	int pick = 0;
	int a_int, b_int;

	if (a.size() < b.size())	swap(a, b);
	len = a.length();

	for (int i = 0; i < a.size() - b.size(); i++) {
		tmp += '0';
	}
	b = tmp + b;

	for (int i = len - 1; i >= 0; i--) {
		a_int  = a[i] - '0';
		b_int = b[i] - '0';
		int c = a_int + b_int + pick;
		if (c >= 10) {
			c -= 10;
			ans += (char)(c + '0');
			pick = 1;
		} else {
			ans += (char)(c + '0');
			pick = 0;
		}
	}
	if (pick == 1)	ans += (char)(pick + '0');
	
	len = ans.length();
	for (int i = len - 1; i >= 0; i--) {
		cout << ans[i];
	}

	return 0;
}