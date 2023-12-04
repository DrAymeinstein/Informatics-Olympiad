// https://arena.moi/problem/mnpc22mnpc2022mul

#include <iostream>

using namespace std;

int main() {
	long double A,B,C;

	cin >> A >> B >> C;

	if (A * B >= C) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}
	return 0;
}
