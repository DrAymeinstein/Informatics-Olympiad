// https://dmoj.ca/problem/gfsscc21p2
// GFSS Christmas Challenge P2 - Height Inspection

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int N{};

	vector<int> student_h;

	cin >> N;

	while (N--) {
		int h;
		cin >> h;
		student_h.push_back(h);
	}

	auto smallest = *min_element(student_h.begin(), student_h.end());
	auto biggest  = *max_element(student_h.begin(), student_h.end());

	cout << smallest << endl;
	cout << biggest << endl;

	return 0;
}
