// https://dmoj.ca/problem/ccc16j2

#include <iostream>
#include <vector>

using namespace std;

bool isMagicSquare(const vector<int>& square) {
    for (int i = 0; i < 4; ++i) {
        if (square[i] + square[i + 4] + square[i + 8] + square[i + 12] !=
            square[i * 4] + square[i * 4 + 1] + square[i * 4 + 2] + square[i * 4 + 3] ||
            square[i * 4] + square[i * 4 + 1] + square[i * 4 + 2] + square[i * 4 + 3] !=
            square[0] + square[1] + square[2] + square[3]) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> square;
    for (int i = 0; i < 16; ++i) {
        int n;
        cin >> n;
        square.push_back(n);
    }

    if (isMagicSquare(square)) {
        cout << "magic" << endl;
    }
    else {
        cout << "not magic" << endl;
    }

    return 0;
}
