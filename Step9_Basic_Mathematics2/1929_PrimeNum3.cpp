#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

int main() {
	int M, N;			// M이상 N이하
	cin >> M >> N;

	bool* PrimeArray = new bool[N + 1];

	for (int i = 2; i <= N; i++) {
		PrimeArray[i] = true;
	}

	for (int i = 2; i <= sqrt(N); i++)
		if (PrimeArray[i] == true)
			for (int j = i * 2; j <= N; j += i)
				PrimeArray[j] = false;


	for (int i = M; i <= N; i++) {
		if (PrimeArray[i]) {
			cout << i << "\n";
		}
	}

	delete(PrimeArray);

	return 0;
}