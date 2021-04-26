#include <iostream>
#include <cstring>
#include <string>
using namespace std;
bool is_GroupWord(char *c) {
	bool arr[26] = { false, };
	for (int i = 0; i < strlen(c); i++) {
		if (arr[c[i] - 'a'] == false) {
			arr[c[i] - 'a'] = true;
		} else if (arr[c[i] - 'a'] == true) {
			if (c[i - 1] != c[i]) return false;
		}
	}
	return true;
}

int main() {
	int n;
	int word_num = 0;
	char w[100][101];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> w[i];
		word_num += is_GroupWord(w[i]);
	}
	cout << word_num << endl;


	return 0;
}