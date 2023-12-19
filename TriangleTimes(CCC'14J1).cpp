// https://dmoj.ca/problem/ccc14j1

#include <iostream>
#include <string>

using namespace std;

void triangle_type(int a, int b, int c) {
	if (a + b + c == 180) {
		if (a == b && b == c && c == 60) {
			cout << "Equilateral" << endl;
		}
		else if (a == b || b == c || c == a) {
			cout << "Isosceles" << endl;
		}
		else {
			cout << "Scalene" << endl;
		}
	}
	else {
		cout << "Error" << endl;
	}
}

int main() {
	int a, b, c;
	cin >> a >> b >> c;

	triangle_type(a, b, c);
	return 0;
}
