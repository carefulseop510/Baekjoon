#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;

int main() {
	int t;
	int h, w, n;
	int** hotel;
	cin >> t;
	for (int i = 0; i < t; i++) {
		cin >> h >> w >> n;
		hotel = (int**)malloc(sizeof(int*) * w);
		for (int j = 0; j < w; j++) {
			hotel[j] = (int*)malloc(sizeof(int) * h);
		}

		for (int j = 0; j < w; j++) {
			for (int k = 0; k < h; k++) {
				n--;
				if (n == 0) {
					if (j + 1 < 10) {
						printf("%d%02d\n", k + 1, j + 1);
					} else {
						printf("%d%d\n", k + 1, j + 1);
					}
					break;
				}
			}
		}

		for (int j = 0; j < w; j++)	free(hotel[j]);
		free(hotel);
	}

	return 0;
}