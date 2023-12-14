// https://dmoj.ca/problem/ccc11s1

#include <iostream>
#include <string>

using namespace std;

int main() {
    int N;
    cin >> N;
    cin.ignore();

    int totalTCount = 0;
    int totalSCount = 0;

    while (N--) {
        string text;
        getline(cin, text);

        int tCount = 0;
        int sCount = 0;

        for (char c : text) {
            if (c == 't' || c == 'T') {
                ++tCount;
            }
            else if (c == 's' || c == 'S') {
                ++sCount;
            }
        }

        totalTCount += tCount;
        totalSCount += sCount;
    }

    if (totalTCount > totalSCount) {
        cout << "English" << endl;
    }
    else if (totalSCount > totalTCount) {
        cout << "French" << endl;
    }
    else {
        cout << "French" << endl;
    }

    return 0;
}
