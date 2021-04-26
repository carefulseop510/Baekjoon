#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <cstdlib>

int main() {
    int n;
    int sum = 0;
    scanf("%d", &n);
    char* arr = (char*)malloc(sizeof(char) * n);
    scanf("%s", arr);
    for (int i = 0; i < n; i++) {
        sum += arr[i] - 48;
    }
    printf("%d", sum);

    return 0;
}