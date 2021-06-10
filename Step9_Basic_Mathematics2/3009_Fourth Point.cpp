#include <iostream>
using namespace std;

int main() {
	int Point[4][2];
	int tmp[2];

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			cin >> Point[i][j];
		}
	}

	for (int j = 0; j < 2; j++) {
		tmp[0] = Point[0][j];
		tmp[1] = Point[1][j];
		if (tmp[0] == Point[2][j])	Point[3][j] = tmp[1];
		else if (tmp[1] == Point[2][j])	Point[3][j] = tmp[0];
		else Point[3][j] = Point[2][j];
		
	}
	cout << Point[3][0] << " " << Point[3][1] << endl;
	return 0;
}