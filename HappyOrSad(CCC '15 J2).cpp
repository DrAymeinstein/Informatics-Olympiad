// https://dmoj.ca/problem/ccc15j2

#include <iostream>
#include <string>

using namespace std;

int main() {
    string input;
    getline(cin, input);

    size_t happyCount = 0;
    size_t sadCount = 0;

    for (size_t i = 0; i < input.length() - 2; ++i) {
        if (input.substr(i, 3) == ":-)") {
            ++happyCount;
        }
        else if (input.substr(i, 3) == ":-(") {
            ++sadCount;
        }
    }

    if (happyCount == 0 && sadCount == 0) {
        cout << "none" << endl;
    }
    else if (happyCount == sadCount) {
        cout << "unsure" << endl;
    }
    else if (happyCount > sadCount) {
        cout << "happy" << endl;
    }
    else {
        cout << "sad" << endl;
    }

    return 0;
}
