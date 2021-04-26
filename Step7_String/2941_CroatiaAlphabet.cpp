#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main() {
	string word;
	cin >> word;
	int cnt = word.length();
	int len = word.length();

	for (int i = 0; i < len; i++) {
		if (word[i] == '=')	cnt--;
		if (word[i] == '-')	cnt--;
		
		if (word[i] == 'd' && word[i + 1] == 'z' && word[i + 2] == '=')	cnt --;
		if (word[i] == 'l' && word[i + 1] == 'j')	cnt--;
		if (word[i] == 'n' && word[i + 1] == 'j')	cnt--;
	}
	cout << cnt << endl;

	return 0;
}