// https://dmoj.ca/problem/ccc18j1

#include <iostream>
#include <vector>

using namespace std;

bool check(vector<int> number) {
    if ((number[0] == 8 || number[0] == 9) && (number[3] == 8 || number[3] == 9) && (number[1] == number[2])) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    vector<int> number(4);

    for (int i = 0; i < 4; i++) {
        cin >> number[i];
    }

    bool telemarketer = check(number);

    if (telemarketer) {
        cout << "ignore" << endl;
    }
    else {
        cout << "answer" << endl;
    }
    return 0;
}
