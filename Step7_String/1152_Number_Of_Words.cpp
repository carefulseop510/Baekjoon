#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
	string s;
	int cnt = 0;
	getline(cin, s);
	int len = s.length();
	
	for (int i = 0; i < len; i++) {
		if (s[i] == ' ')	cnt++;
	}
	if (s[0] == ' ')	cnt--;
	if (s.back() == ' ')	cnt--;

	cout << cnt + 1 << endl;

	return 0;
}