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
	
	//���̰� 1�̸� �׳� �� ���� �����ϰ� ����
	if (len == 1) {
		cout << s << endl;
		exit(0);
	}
	//�Ϲ����� ��� ���ĺ� ������� �ش� ĭ�� ī��Ʈ
	for (int i = 0; i < len; i++) {
		arr[s[i] - 'A']++;
	}
	//�� ��Ŭ �����鼭 max_cnt ����
	for (int i = 0; i < 26; i++) {
		if (arr[i] > max_cnt) {
			max_cnt = arr[i];
			max_a = i + 'A';
		}
	}

	//max_cnt�� ���� ũ�Ⱑ �ִٸ� ī��Ʈ
	for (int i = 0; i < 26; i++) {
		if (arr[i] == max_cnt) {
			cnt++;
		}
	}

	//���� ũ���� ĭ�� �� �� �̻��̸�
	if (cnt >= 2) {
		cout << "?" << endl;
	} else {
		cout << max_a << endl;
	}
	
	return 0;
}