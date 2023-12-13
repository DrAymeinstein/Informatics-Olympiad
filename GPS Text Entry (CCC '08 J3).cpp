// https://dmoj.ca/problem/ccc08j3

#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main() {
    char grid[5][6] = {
        {'A', 'B', 'C', 'D', 'E', 'F'},
        {'G', 'H', 'I', 'J', 'K', 'L'},
        {'M', 'N', 'O', 'P', 'Q', 'R'},
        {'S', 'T', 'U', 'V', 'W', 'X'},
        {'Y', 'Z', ' ', '-', '.', 'E'}
    };

    string phrase;
    getline(cin, phrase);

    int curRow = 0, curCol = 0;

    int movements = 0;
    for (char ch : phrase) {
        for (int i = 0; i < 5; ++i) {
            for (int j = 0; j < 6; ++j) {
                if (grid[i][j] == ch) {
                    movements += abs(i - curRow) + abs(j - curCol);
                    curRow = i;
                    curCol = j;
                }
            }
        }
    }

    movements += abs(4 - curRow) + abs(5 - curCol);

    cout << movements << endl;

    return 0;
}
