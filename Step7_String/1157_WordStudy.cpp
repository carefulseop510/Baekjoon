#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>
#include <cstdlib>
using namespace std;

int main() {
	string s;
	char max_a;
	int max_cnt = 0;
	int cnt = 0;
	int arr[26] = { 0, };
	cin >> s;
	transform(s.begin(), s.end(), s.begin(), ::toupper);
	int len = s.length();
	
	//길이가 1이면 그냥 그 수만 리턴하고 종료
	if (len == 1) {
		cout << s << endl;
		exit(0);
	}
	//일반적인 경우 알파벳 순서대로 해당 칸에 카운트
	for (int i = 0; i < len; i++) {
		arr[s[i] - 'A']++;
	}
	//한 써클 돌리면서 max_cnt 설정
	for (int i = 0; i < 26; i++) {
		if (arr[i] > max_cnt) {
			max_cnt = arr[i];
			max_a = i + 'A';
		}
	}

	//max_cnt와 같은 크기가 있다면 카운트
	for (int i = 0; i < 26; i++) {
		if (arr[i] == max_cnt) {
			cnt++;
		}
	}

	//같은 크기의 칸이 두 곳 이상이면
	if (cnt >= 2) {
		cout << "?" << endl;
	} else {
		cout << max_a << endl;
	}
	
	return 0;
}