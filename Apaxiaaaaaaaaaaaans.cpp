// https://open.kattis.com/problems/apaxiaaans

#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    cin >> input;

    if (input.empty()) {
        cout << input << endl;
        return 0;
    }

    string compact_version(1, input[0]);

    for (int i = 1; i < input.length(); ++i) {
        if (input[i] != input[i - 1]) {
            compact_version += input[i];
        }
    }

    cout << compact_version << endl;

    return 0;
}
