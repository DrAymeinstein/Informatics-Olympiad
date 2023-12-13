// https://dmoj.ca/problem/ccc17j1

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int x, y;
	cin >> x >> y;

	if (x > 0) {
		if (y > 0) cout << "1" << endl;;
		if (y < 0) cout << "4" << endl;;
	}
	if (x < 0) {
		if (y > 0) cout << "2" << endl;
		if (y < 0) cout << "3" << endl;
	}

	return 0;
}
