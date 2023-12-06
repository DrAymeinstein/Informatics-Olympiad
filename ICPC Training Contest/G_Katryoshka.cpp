// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/G

#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
	long long eye, mouth, body;

	cin >> eye >> mouth >> body;

	if (eye == 0 || body == 0) {
		cout << 0;

		return 0;
	}

	long long result = min(min(eye, mouth), body);
	eye -= result;
	mouth -= result;
	body -= result;

	if (eye == 0 || body == 0) {
		cout << result;

		return 0;
	}

	long long eye2 = eye / 2;

	if (body > eye2) {
		result += eye2;
	}

	else {
		result += body;
	}

	cout << result << endl;
}
// For me, I consider this problem as the hardest of them although it is not the last one
// Explanation:
// We test cases, and remove from everything, then +count