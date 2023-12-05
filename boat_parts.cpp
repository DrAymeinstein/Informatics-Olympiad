// https://open.kattis.com/problems/boatparts

#include <iostream>
#include <unordered_set>
#include <vector>
#include <string>

using namespace std;

int main() {
    int P, N;
    cin >> P >> N;

    unordered_set<string> parts;
    vector<string> days;

    for (int i = 0; i < N; ++i) {
        string part;
        cin >> part;

        days.push_back(part);
        parts.insert(part);

        if (parts.size() == P) {
            cout << i + 1 << endl;
            return 0;
        }
    }

    cout << "paradox avoided" << endl;

    return 0;
}
