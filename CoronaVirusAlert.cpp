// https://arena.moi/problem/gc5covidalert

#include <iostream>
#include <string>

using namespace std;

int main() {
	char covid = 'c';
	string word;

	cin >> word;

	if (word.find(covid) != string::npos) {
		cout << "Stay Home" << endl;
	}
	else {
		cout << "Safe" << endl;
	}

	return 0;
}
