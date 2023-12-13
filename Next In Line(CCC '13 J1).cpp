// https://dmoj.ca/problem/ccc13j1

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int A, B;
	cin >> A >> B;

	if (A == B) {
		cout << A << endl;
	} if (A != B) {
		if (A > B) {
			cout << A + abs(A - B) << endl;
		}
		if (A < B) {
			cout << B + abs(A - B) << endl;
		}
	}

	return 0;
}
