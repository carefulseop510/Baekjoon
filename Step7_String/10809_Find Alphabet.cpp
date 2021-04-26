#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <cstring>

int main() {
    char s[100];
    int arr[26];
    for (int i = 0; i < 26; i++) {
        arr[i] = -1;
    }
    scanf("%s", s);
    for (int j = 'a'; j <= 'z'; j++) {
        for (int i = 0; i < strlen(s); i++) {
            if (j == s[i]) {
                arr[s[i] - 'a'] = i;
                break;
            }
        }
    }

    for (int i = 0; i < 26; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}