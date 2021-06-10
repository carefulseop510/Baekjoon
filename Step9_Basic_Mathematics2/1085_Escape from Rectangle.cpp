#include <iostream>
using namespace std;

int main() {
	int x, y, w, h;
	int len = 0;
	cin >> x >> y >> w >> h;

	// x, y, w - x, h - y
	
	if (w - x >= h - y)	len = h - y;
	else if (w - x < h - y)	len = w - x;

	if (len > x)	len = x;
	if (len > y)	len = y;

	cout << len << endl;

	return 0;
}